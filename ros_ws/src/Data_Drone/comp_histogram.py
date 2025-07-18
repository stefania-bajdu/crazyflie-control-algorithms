import numpy as np
import matplotlib.pyplot as plt

# sim_ids = {
#     1: {'seq': 505202504, 'par': 505202505},
#     2: {'seq': 505202501, 'par': 505202508},
#     3: {'seq': 505202503, 'par': 505202502}
# }

COMP_WITH = "spline"

sim_ids = {
    1: {'seq': 702, COMP_WITH: 702},
    2: {'seq': 704, COMP_WITH: 704},
    3: {'seq': 705, COMP_WITH: 705}
}

FILE_TEMPLATE = "src/Data_Drone/data_files/computation_times_{}_{}.npy"


def load_comp_times(simid, suffix):
    data = np.load(FILE_TEMPLATE.format(simid, suffix), allow_pickle=True).item()
    return np.array(data['comp_times'])


START_IDX = 100
means_seq = []
means_par = []
labels = []

for num_drones, sims in sim_ids.items():
    seq_times = load_comp_times(sims['seq'], "seq")[START_IDX:]
    par_times = load_comp_times(sims[COMP_WITH], COMP_WITH)[START_IDX:]

    means_seq.append(np.mean(seq_times))
    means_par.append(np.mean(par_times))
    labels.append(f"{num_drones} Drone{'s' if num_drones > 1 else ''}")


x = np.arange(len(labels))
width = 0.35

fig, ax = plt.subplots(figsize=(8, 5))
bars1 = ax.bar(x - width/2, means_seq, width, label='Acceleration', color='tab:blue')
bars2 = ax.bar(x + width/2, means_par, width, label="Control Points", color='tab:orange')

# === Add annotations ===
for bar in bars1 + bars2:
    height = bar.get_height()
    ax.annotate(f'{height:.3f}',
                xy=(bar.get_x() + bar.get_width() / 2, height),
                xytext=(0, 3),  # vertical offset
                textcoords="offset points",
                ha='center', va='bottom', fontsize=8)


ax.set_xlabel('Number of Drones')
ax.set_ylabel('Avg Computation Time (s)')
ax.set_title('Average MPC Computation Time per Step')
ax.set_xticks(x)
ax.set_xticklabels(labels)
ax.legend()
ax.grid(True, axis='y', linestyle='--', alpha=0.5)
plt.tight_layout()

# === Optional save ===
# plt.savefig("grouped_computation_time_bar.png", dpi=300)

plt.show()
