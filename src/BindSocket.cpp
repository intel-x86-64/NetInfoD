#include "../include/BindSocket.h"

BindSocket::BindSocket(ISocket &socket, int port)
    : socketFileDescriptor(socket.getFileDescriptor()) {
  addr.sin_family = AF_INET;
  addr.sin_addr.s_addr = INADDR_ANY;
  addr.sin_port = htons(port);
}

void BindSocket::bindSocket() {
  if (bind(socketFileDescriptor, (sockaddr *)&addr, sizeof(addr)) < 0) {
    throw std::runtime_error("Error to bind socket");
  }
}