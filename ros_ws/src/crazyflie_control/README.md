# 🚁 crazyflie_control

This package provides ROS 2 nodes and controllers for Crazyflie drone swarms. It integrates with a motion capture system (Qualisys Track Manager) to enable precise multi-agent trajectory tracking.

---

## 📂 Folder Structure

| File/Folder                 | Description                                 |
|-----------------------------|---------------------------------------------|
| `config/`                   | YAML configuration files                    |
| `cache/`                    | Cached files for Crazyflie API              |
| `Bspline_conversionMatrix.py`| B-spline trajectory conversion utilities   |
| `cluster_node.py`           | Node for clustering algorithm (<span style="color:red;">WIP</span>)        |
| `control_cft.py`            | Controller for Cluster Formation Tracking (<span style="color:red;">WIP</span>)  |
| `control_packagecf.py`      | Common Crazyflie function helpers           |
| `control_parallel.py`       | Parallelized MPC controller for swarm       |
| `control_sequential.py`     | Sequential MPC controller                   |
| `control_spline_adv.py` & `control_spline.py`    | Using B-Splines to solve the Optimization Problem (sequential only)            |
| `generate_traj.py`          | Trajectory generation utilities             |
| `get_data_QTM.py`           | Interfaces with Qualisys Track Manager (older code, unused)     |
| `grape_3d.py`               | GRAPE clustering algorithm in 3D            |
| `mpc_solvers.py`            | MPC solvers for drone control               |
| `pid_fl.py`                 | PID controller class (unused)                    |
| `Trajectory_generation.py`  | Trajectory generation and preprocessing     |
| `Upos.npy`                  | Precomputed matrices for the control input feasible region for MPC                |
| `launch/`                   | ROS 2 launch files                          |

---

## 🔄 control_sequential.py Flow (Function-by-Function)

### Class: CrazyflieController(Node)
**Purpose:** Main ROS 2 node to control Crazyflie swarm using sequential MPC.

- `__init__`: Initializes parameters, trajectories, controllers, subscribes to mocap data, and starts swarm.
- `start_swarm`: Initializes Crazyflie connections, resets estimators, and unlocks safety.
- `shutdown_swarm`: Safely lands and disconnects all drones.
- `poses_callback`: Updates drone states from motion capture data.
- `load_params`: Loads system configuration from YAML.
- `load_mpc_configuration`: Loads MPC parameters and precomputed matrices.
- `load_trajectories`: Loads reference flight trajectories.
- `load_takeoff_traj`: Generates takeoff trajectories.
- `load_landing_point`: Defines landing reference points.
- `set_controller`: Initializes LQR controllers.
- `wait_for_param_download`: Waits for parameters download after connection.
- `unlock_safety_check`: Disables safety lock on drones.
- `apply_control`: Sends computed control inputs to each drone.
- `land_grad`: Gradual landing by reducing thrust stepwise.
- `land`: Stops commands and hands over to high-level controller.
- `control_callback`: Periodic timer callback that handles takeoff, flight, and landing phases.
- `control_loop`: Computes control inputs based on state and trajectory at each step.
- `get_real_control`: Converts acceleration inputs to Crazyflie commands with PI loop.

### Function: main(args=None)
**Purpose:** Initializes ROS 2, spins CrazyflieController node, and shuts down safely on interrupt.

---

## 🧠 mpc_solvers.py Overview

**Purpose:** Provides all optimization solver setups and parallelized MPC workers for trajectory tracking and takeoff. It is the core computation module for generating smooth and dynamically feasible control inputs.

### 🚀 Functions
- **setup_takeoff_solver(solver_config)**  
  Initializes a CasADi solver using B-spline parameterization for smooth takeoff trajectories. Enforces position/velocity continuity and acceleration constraints.

- **setup_spline_solver(solver_config)**  
  Configures a CasADi solver for flight trajectory tracking using B-splines. Handles position, velocity, and acceleration tracking with virtual control constraints.

- **compute_spline_control(solver_data, state_xi, pos_ref, v_ref, i)**  
  Solves the spline-based MPC at a given timestep. Outputs the virtual control (acceleration) to apply.

- **setup_solver(solver_config)**  
  Standard MPC setup (no B-splines). Optimizes discrete state/control sequences over a prediction horizon.

- **compute_control_real(solver_data, state_xi, pos_ref, v_ref, i, id=0)**  
  Solves standard MPC to compute virtual input. Handles trajectory padding when near the end of the reference.

---

### 👨‍✈️ Ray Remote Classes
Parallelized workers for multi-agent drone control.

- **MPCWorker**  
  Runs an MPC solver instance in a Ray actor for a single drone. Solves for optimal virtual control inputs in parallel.

- **MPCWorkerCFT**  
  Similar to `MPCWorker` but includes formation offsets for Cluster Formation Tracking (CFT). Each drone computes a slightly offset trajectory to maintain a formation. (Currently unused in this project's experiments, tied to the full cluster formation flow which includes collision avoidance.)

---

