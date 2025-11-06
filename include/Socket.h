#pragma once

#include "ISocket.h"

#include <stdexcept>
#include <sys/socket.h>
#include <unistd.h>

class Socket : public virtual ISocket {
  int socketFileDescriptor{0};

public:
  void create() override;
  void closeSocket() override;
  int getFileDescriptor() override;
  ~Socket();
};