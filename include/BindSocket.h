#pragma once
#include "ISocket.h"
#include <netinet/in.h>
#include <stdexcept>
#include <sys/socket.h>

class BindSocket {
private:
  int socketFileDescriptor{0};
  sockaddr_in addr;

public:
  BindSocket(ISocket &socket, int port);
  void bindSocket();
};