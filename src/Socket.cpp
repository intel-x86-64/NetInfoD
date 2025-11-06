#include "../include/Socket.h"
#include <unistd.h>

void Socket::create() {
  socketFileDescriptor = socket(AF_INET, SOCK_STREAM, 0);

  if (socketFileDescriptor < 0) {
    throw std::runtime_error("Error to create socket");
  }
}

int Socket::getFileDescriptor() { return socketFileDescriptor; }

void Socket::closeSocket() { close(socketFileDescriptor); }

Socket::~Socket() {
  if (socketFileDescriptor > 0) {
    closeSocket();
  }
}