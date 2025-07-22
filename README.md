# 🚁 crazyflie-control

ROS 2 packages for controlling a swarm of Crazyflie 2.1 nanodrones with motion capture integration.

This project requires the [NatNet SDK](https://optitrack.com/support/downloads/developer-tools.html#natnet-sdk) to interface with the motion capture system. Either install the SDK manually, or make sure to clone this repository recursively.

*Hint*: After downloading the repository, copy the `NatNet_SDK_4.3_ubuntu/lib/libNatNet.so` into the following directory: `ros_ws/src/motion_capture_tracking/motion_capture_tracking/deps/libmotioncapture/deps/NatNetSDKCrossplatform/lib/ubuntu`.

---

## 📦 Overview

This repository contains two ROS 2 packages for controlling Crazyflie drones in a motion-captured environment:

| Package| Description|
|----------------------------|-----------------------------|
| `motion_capture_tracking`| Interfaces with the Qualisys motion capture system (QTM)|
| `crazyflie_control`| Implements multi-agent control algorithms for Crazyflie drones|

The system uses **motion capture data** from Qualisys Track Manager to provide precise state feedback for swarm control.

📖 Check the [`crazyflie_control` README](ros_ws/src/crazyflie_control/README.md) for a detailed overview of its structure and functionality.

---

## ⚡ Quick Start


### 🚨 Prerequisites

Ensure your system has **ROS 2 Humble** installed along with all required build tools and dependencies (e.g., `CMake`, `rosdep`, `ament`, and Python packages).

---

### 1️⃣ Clone Repository

Make sure to clone this repository recursively using either `--recursive` or `--recurse-submodules`.

---

### 2️⃣ Install Dependencies

Install Python dependencies with `pip` (this might not fully install everything and you might encounter the need to install other packages as you run the experiments, be sure to update the `requirements.txt`):

```bash
pip install -r requirements.txt
```

Be sure to also install other ROS 2 dependencies using `rosdep` (requires ROS 2 Humble):

```bash
rosdep install --from-paths src --ignore-src -r -y
```

---

### 3️⃣ NatNet SDK Setup

Download and install the [NatNet SDK](https://optitrack.com/support/downloads/developer-tools.html#natnet-sdk).  
After installation, update your environment variables to include the SDK library path:

```bash
export LD_LIBRARY_PATH=/path/to/NatNetSDK/lib:$LD_LIBRARY_PATH
```

📌 *Tip: Add the above line to your shell configuration file (e.g., `.bashrc`) to make it persistent.*

---

### 4️⃣ Launch the System


**Optional:** You can start by launching only the motion capture node to verify that all drone bodies are detected correctly and that the connection to the cameras works:

```bash
ros2 launch motion_capture_tracking launch.py
```

For the full experiment, launch the combined motion capture and controller system from the `crazyflie_control` package. This will automatically start the motion capture node as part of the process:

```bash
ros2 launch crazyflie_control mocap_and_controller.launch.py
```

