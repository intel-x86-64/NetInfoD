#pragma once

class ISocket {
private:
public:
  void virtual create() = 0;
  void virtual closeSocket() = 0;
  int virtual getFileDescriptor() = 0;
  ~ISocket() = default;
};