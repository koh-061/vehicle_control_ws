from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # 車両インターフェースノード（シリアル通信）
        Node(
            package='vehicle_interface',
            executable='vehicle_interface_node',
            name='vehicle_interface_node',
            output='screen'
        ),
        # キーボード制御ノード
        Node(
            package='vehicle_control',
            executable='vehicle_controller',
            name='vehicle_controller',
            output='screen'
        )
    ])
