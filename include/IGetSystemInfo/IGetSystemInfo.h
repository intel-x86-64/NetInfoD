#pragma once
#include <string>

class IGetSystemInfo {
  virtual std::string getInfo() = 0;
  virtual ~IGetSystemInfo() = default;
};