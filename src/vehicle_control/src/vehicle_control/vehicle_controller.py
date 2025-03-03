import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import sys
import tty
import termios

class VehicleController(Node):
    def __init__(self):
        super().__init__('vehicle_controller')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.get_logger().info("Vehicle Controller Node Started")
        self.keyboard_listener()

    def keyboard_listener(self):
        settings = termios.tcgetattr(sys.stdin)
        tty.setcbreak(sys.stdin.fileno())

        try:
            while True:
                key = sys.stdin.read(1)
                twist = Twist()
                if key == '\x1b[A':  # ↑
                    twist.linear.x = 1.0
                elif key == '\x1b[B':  # ↓
                    twist.linear.x = -1.0
                elif key == '\x1b[C':  # →
                    twist.angular.z = -1.0
                elif key == '\x1b[D':  # ←
                    twist.angular.z = 1.0
                else:
                    twist.linear.x = 0.0
                    twist.angular.z = 0.0

                self.publisher_.publish(twist)
        finally:
            termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)

def main(args=None):
    rclpy.init(args=args)
    node = VehicleController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
