#pragma once

#include "ISocket.h"
#include <memory>

class ListenSocket {
private:
  int socketFileDescriptor{0};

public:
  ListenSocket(ISocket &socket);
  void listenSocket();
};