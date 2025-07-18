import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/bajdus/Desktop/complete-velocity-messages/ros_ws/install/crazyflie_control'
