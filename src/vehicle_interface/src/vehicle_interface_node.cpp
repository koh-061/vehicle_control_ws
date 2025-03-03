#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "vehicle_interface/serial_communication.hpp"

class VehicleInterfaceNode : public rclcpp::Node {
public:
    VehicleInterfaceNode() : Node("vehicle_interface_node") {
        RCLCPP_INFO(this->get_logger(), "Vehicle Interface Node Started");

        // シリアル通信の初期化
        serial_comm_ = std::make_shared<SerialCommunication>("/dev/ttyUSB0", 115200);
        
        // cmd_vel トピックの購読
        cmd_vel_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "cmd_vel", 10, std::bind(&VehicleInterfaceNode::cmdVelCallback, this, std::placeholders::_1));
    }

private:
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_sub_;
    std::shared_ptr<SerialCommunication> serial_comm_;

    void cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received cmd_vel: linear=%.2f, angular=%.2f",
                    msg->linear.x, msg->angular.z);
        
        // シリアル通信でコマンドを送信
        std::string command = "SPEED " + std::to_string(msg->linear.x) + " TURN " + std::to_string(msg->angular.z) + "\n";
        serial_comm_->sendCommand(command);
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<VehicleInterfaceNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
