import numpy as np
import matplotlib.pyplot as plt
import argparse
from generate_traj import *

DRONE_URIS = {'DroneE1': 'radio://0/80/2M/E7E7E7E7E1', 'DroneE2': 'radio://0/80/2M/E7E7E7E7E2',
              'DroneE3': 'radio://0/80/2M/E7E7E7E7E3', 'DroneE9': 'radio://0/80/2M/E7E7E7E7E9'}


def load_data(path):
    d = np.load(path, allow_pickle=True).item()
    return d['data'], d['ref'], d['vref']


def plot_real_traj_animated(t, pos_dict, ref_dict, takeoff_time=None,
                            trace_length=40, skip_frames=1,
                            floor_z=0.0, marker_size=50):

    # full_ref = get_ref(0, 30, 0.1)
    # full_refTo = get_ref_setpoints_takeoff(psi=0, Tto=takeoff_time, dt=0.1, ref=full_ref["trajectory"])
    # ref_traj = np.vstack([full_refTo["trajectory"], full_ref["trajectory"]])

    ref_traj = ref_dict['DroneE1'] - np.array([0.5, 0, 0])
    
    names = list(pos_dict.keys())
    Na = len(names)
    colors = plt.cm.tab10(np.linspace(0, 1, Na))

    # set up figure
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')
    ax.set(xlabel='X (m)', ylabel='Y (m)', zlabel='Z (m)',
           title='Real-World Drone Trajectories')
    ax.grid(True)

    # compute global bounds
    all_pos = np.vstack(list(pos_dict.values()))
    x_min, y_min = all_pos[:, 0].min() - 0.1, all_pos[:, 1].min() - 0.1
    x_max, y_max = all_pos[:, 0].max() + 0.1, all_pos[:, 1].max() + 0.1
    z_min, z_max = min(floor_z, all_pos[:, 2].min() - 0.1), all_pos[:, 2].max() + 0.1
    ax.set(xlim=(x_min, x_max), ylim=(y_min, y_max), zlim=(z_min, z_max))

    # static floor shadows (initial positions)
    for i, name in enumerate(names):
        x0, y0, _ = pos_dict[name][0]
        ax.scatter(x0, y0, floor_z, color=colors[i],
                   marker='x', s=15, alpha=0.4, label='_nolegend_')

    # draw takeoff plane if requested
    if takeoff_time is not None:
        # find index closest to takeoff_time
        idx = np.argmin(np.abs(t - takeoff_time))
        xs = [x_min, x_max]
        ys = [y_min, y_max]
        X, Y = np.meshgrid(xs, ys)
        # vertical plane at t axis is tricky in 3D; instead: annotate
        ax.text2D(0.05, 0.95, f"Takeoff @ t={takeoff_time:.2f}s",
                  transform=ax.transAxes, color='gray')

    # init trajectory lines + moving dots
    traj_lines = []
    dots       = []
    for i,name in enumerate(names):
        ln, = ax.plot([], [], [], color=colors[i], label=name)
        sc = ax.scatter([], [], [], color=colors[i], s=marker_size)
        sc.set_sizes([marker_size])
        traj_lines.append(ln)
        dots.append(sc)

    # init single reference marker (red hollow circle)
    ref_dot = ax.scatter([], [], [],
                         marker='o',
                         edgecolors='red',
                         facecolors='none',
                         s=marker_size*1.2,
                         label='reference')
    ref_dot.set_sizes([marker_size*1.2])

    ax.legend()
    
    plt.pause(10)

    # animation loop
    M = len(t)
    for k in range(M):
        start = max(0, k-trace_length+1)

        # update each drone
        for i,name in enumerate(names):
            P = pos_dict[name]
            traj_lines[i].set_data(P[start:k+1,0], P[start:k+1,1])
            traj_lines[i].set_3d_properties(P[start:k+1,2])
            dots[i]._offsets3d = ([P[k,0]], [P[k,1]], [P[k,2]])

        # update the single reference marker
        Rk = ref_traj[k]
        ref_dot._offsets3d = ([Rk[0]], [Rk[1]], [Rk[2]])

        if k % skip_frames == 0:
            plt.pause(0.1)

    plt.show()


p = argparse.ArgumentParser()
p.add_argument('simid', type=int, help="Simulation ID")
p.add_argument('s_type', type=str,
               choices=['seq', 'parallel', 'cft', 'splines'],
               help="Data type")
args = p.parse_args()
simid = args.simid
s_type = args.s_type

TAKEOFF_FILE = f"src/Data_Drone/data_files/drone_data_{simid}_takeoff_{s_type}.npy"
DATA_FILE = f"src/Data_Drone/data_files/drone_data_{simid}_{s_type}.npy"


def main():

    to_data, to_ref, to_vref = load_data(TAKEOFF_FILE)
    fl_data, fl_ref, fl_vref = load_data(DATA_FILE)

    # build combined time + per-drone pos arrays
    all_names = list(fl_data.keys())
    pos_dict = {}
    ref_dict = {}
    t_dicts = []
    takeoff_times = []

    for name in all_names:
        # extract state: columns 0:3
        to_state = to_data[name][:, 0:3]
        fl_state = fl_data[name][:, 0:3]
        t_to = to_data[name][:, 17]
        t_fl = fl_data[name][:, 17]
        # combine
        pos = np.vstack([to_state, fl_state])
        ref = np.vstack([to_ref[DRONE_URIS[name]][:, 0:3].reshape(-1, 3),
                         fl_ref[DRONE_URIS[name]][:, 0:3].reshape(-1, 3)])
        
        t = np.concatenate([t_to, t_fl])
        pos_dict[name] = pos
        ref_dict[name] = ref
        t_dicts.append(t)
        takeoff_times.append(t_to[-1])

    # assume synchronized times
    t0 = t_dicts[0]
    tf = t_dicts[1:]
    for arr in tf:
        if len(arr) != len(t0) or not np.allclose(arr, t0):
            print("[WARNING] time vectors differ across drones")
    # pick the longest one
    t_all = max(t_dicts, key=len)
    takeoff_time = takeoff_times[0]
    
    # fig = plt.figure()
    # ax = fig.add_subplot(111, projection='3d')
    # ax.set(xlabel='X (m)', ylabel='Y (m)', zlabel='Z (m)',
    #        title='Reference Trajectories')
    # colors = plt.cm.tab10(np.linspace(0, 1, len(all_names)))

    # for i, name in enumerate(all_names):
    #     ref = ref_dict[name]
    #     ax.plot(ref[:, 0], ref[:, 1], ref[:, 2],
    #             label=f'{name} ref', color=colors[i])

    # ax.legend()
    # ax.grid(True)
    # plt.show()

    plot_real_traj_animated(t_all, pos_dict, ref_dict=ref_dict, 
                            takeoff_time=10.00,
                            trace_length=50,
                            skip_frames=1,
                            floor_z=0.0,
                            marker_size=20)


if __name__ == "__main__":
    main()
