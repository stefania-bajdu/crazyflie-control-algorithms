import asyncio
import xml.etree.ElementTree as ET
import numpy as np
import math
import qtm
import threading
import time


def create_body_index(xml_string):
    """ Extract a name to index dictionary from 6dof settings xml. """
    xml = ET.fromstring(xml_string)
    body_to_index = {}
    for index, body in enumerate(xml.findall("*/Body/Name")):
        body_to_index[body.text.strip()] = index

    return body_to_index


def accurate_delay(delay):
    """ Function to provide accurate time delay in millisecond. """
    _ = time.perf_counter() + delay/1000
    while time.perf_counter() < _:
        pass


class StreamingData6DEULER(threading.Thread):
    def __init__(self, IP_addr, list_of_bodies):
        threading.Thread.__init__(self)
        self.IP = IP_addr
        self.list_of_bodies = list_of_bodies
        self.currentPos = {}
        self.currentVel = {}
        self.prePosition = {}
        self.pose = {}
        self.rotation = {}
        self.connection = None
        self._stay_open = True
        self.nb_bodies = 0
        self.body_index = None
        self.time_stamp = []
        self.feedback_QTM = {}
        self.finish_initial = False
        self.on_pose = None

    def run(self):
        # asyncio.run(self.get_initial_position())
        asyncio.run(self._life_cycle())

    def close(self):
        self._stay_open = False
        self.join()

    async def _connect(self):
        self.connection = await qtm.connect(self.IP, 22223, version="1.18")
        if self.connection is None:
            return
        xml_string = await self.connection.get_parameters(parameters=["6d"])
        self.body_index = create_body_index(xml_string)

    async def _life_cycle(self):
        await self.get_initial_position()
        await self.streamdata()
        while (self._stay_open):
            await asyncio.sleep(1)
        await self._close()

    async def _close(self):
        await self.connection.stream_frames_stop()
        self.connection.disconnect()

    async def get_initial_position(self):
        await self._connect()
        first_packet = await self.connection.get_current_frame(components=["6deuler"])
        info, bodies = first_packet.get_6d_euler()
        self.time_stamp = first_packet.timestamp

        print(first_packet.timestamp)

        self.nb_bodies = info.body_count

        for i in range(len(self.list_of_bodies)):
            wanted_body = self.list_of_bodies[i]
            if wanted_body is not None and wanted_body in self.body_index:
                wanted_index = self.body_index[wanted_body]
                position, rotation = bodies[wanted_index]
                if (not np.isnan(position.x)):
                    self.prePosition[wanted_body] = [position.x/1000, position.y/1000, position.z/1000, rotation.a3]
                    self.rotation[wanted_body] = [rotation.a1, rotation.a2, rotation.a3]

                else:
                    print("Some problem with the camera. Cannot detect all the drones. Calibration needed.")
                    return
        if self.on_pose:
            self.on_pose(self.prePosition)
        self.finish_initial = True

    async def streamdata(self):
        await self.connection.stream_frames(components=["6deuler"], on_packet=self.on_packet)

    def on_packet(self, packet):
        info, bodies = packet.get_6d_euler()
        for i in range(len(self.list_of_bodies)):
            wanted_body = self.list_of_bodies[i]
            if wanted_body is not None and wanted_body in self.body_index:
                wanted_index = self.body_index[wanted_body]
                position, rotation = bodies[wanted_index]
                if (not np.isnan(position.x)):
                    self.currentPos[wanted_body] = [position.x/1000, position.y/1000, position.z/1000, rotation.a3]
                    self.rotation[wanted_body] = get_quaternion_from_euler(rotation.a1*np.pi/180, rotation.a2*np.pi/180, rotation.a3*np.pi/180)
                    self.currentVel[wanted_body] = 1000000 * (np.array(self.currentPos[wanted_body][0:3]) -
                                                              np.array(self.prePosition[wanted_body][0:3]))/(packet.timestamp-self.time_stamp)
                    self.prePosition[wanted_body] = self.currentPos[wanted_body]
                    self.feedback_QTM[wanted_body] = self.currentPos[wanted_body][0:3] + self.currentVel[wanted_body].tolist() + [self.currentPos[wanted_body][3]]
                    # [position.x/1000,position.y/1000,position.z/1000,self.rotation[wanted_body]]
                    self.pose[wanted_body] = self.currentPos[wanted_body][0:3] + self.rotation[wanted_body]

                else:
                    pass

        if self.on_pose:
            # self.on_pose(self.feedback_QTM)
            self.on_pose(self.pose)
        self.time_stamp = packet.timestamp


def get_quaternion_from_euler(roll, pitch, yaw):
    """
    Convert an Euler angle to a quaternion.

    Input
        :param roll: The roll (rotation around x-axis) angle in radians.
        :param pitch: The pitch (rotation around y-axis) angle in radians.
        :param yaw: The yaw (rotation around z-axis) angle in radians.

    Output
        :return qx, qy, qz, qw: The orientation in quaternion [x,y,z,w] format
    """
    qx = np.sin(roll/2) * np.cos(pitch/2) * np.cos(yaw/2) - np.cos(roll/2) * np.sin(pitch/2) * np.sin(yaw/2)
    qy = np.cos(roll/2) * np.sin(pitch/2) * np.cos(yaw/2) + np.sin(roll/2) * np.cos(pitch/2) * np.sin(yaw/2)
    qz = np.cos(roll/2) * np.cos(pitch/2) * np.sin(yaw/2) - np.sin(roll/2) * np.sin(pitch/2) * np.cos(yaw/2)
    qw = np.cos(roll/2) * np.cos(pitch/2) * np.cos(yaw/2) + np.sin(roll/2) * np.sin(pitch/2) * np.sin(yaw/2)

    return [qx, qy, qz, qw]


drone_bodies = ['DroneE1']

if __name__ == '__main__':
    data = StreamingData6DEULER("192.168.1.145", drone_bodies)
    data.start()
    while (not data.finish_initial):
        accurate_delay(1000)
    data.close()
