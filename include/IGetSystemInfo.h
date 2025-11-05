#pragma once
#include <string>

class IGetSystemInfo {
  virtual std::string getInfo() = 0;
  ~IGetSystemInfo() = default;
};