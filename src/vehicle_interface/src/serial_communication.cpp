#include "vehicle_interface/serial_communication.hpp"
#include <iostream>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <cstring>

SerialCommunication::SerialCommunication(const std::string& port, int baud_rate) {
    serial_fd_ = open(port.c_str(), O_RDWR | O_NOCTTY);
    if (serial_fd_ == -1) {
        std::cerr << "Failed to open serial port: " << port << std::endl;
        return;
    }

    struct termios tty;
    memset(&tty, 0, sizeof tty);
    if (tcgetattr(serial_fd_, &tty) != 0) {
        std::cerr << "Error getting serial attributes" << std::endl;
        return;
    }

    cfsetospeed(&tty, baud_rate);
    cfsetispeed(&tty, baud_rate);

    tty.c_cflag |= (CLOCAL | CREAD);
    tcsetattr(serial_fd_, TCSANOW, &tty);
}

SerialCommunication::~SerialCommunication() {
    if (serial_fd_ != -1) {
        close(serial_fd_);
    }
}

void SerialCommunication::sendCommand(const std::string& command) {
    if (serial_fd_ != -1) {
        write(serial_fd_, command.c_str(), command.size());
    }
}
