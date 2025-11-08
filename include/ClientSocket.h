#pragma once

#include "ISocket.h"

class ClientSocket : public virtual ISocket {
private:
  int socketFileDescriptor{0};

public:
  void setFileDescriptor(int FileDescriptor);
  void closeSocket() override;
  int getFileDescriptor() override;
  ~ClientSocket();
};