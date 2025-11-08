#include "../include/ClientSocket.h"

void ClientSocket::setFileDescriptor(int fileDescriptor) {
  socketFileDescriptor = fileDescriptor;
}
void ClientSocket::closeSocket() { closeSocket(); }
int ClientSocket::getFileDescriptor() { return socketFileDescriptor; }

ClientSocket::~ClientSocket() {
  if (socketFileDescriptor > 0) {
    closeSocket();
  }
}