#ifndef SERIAL_COMMUNICATION_HPP
#define SERIAL_COMMUNICATION_HPP

#include <string>

class SerialCommunication {
public:
    SerialCommunication(const std::string& port, int baud_rate);
    ~SerialCommunication();
    void sendCommand(const std::string& command);

private:
    int serial_fd_;
};

#endif
