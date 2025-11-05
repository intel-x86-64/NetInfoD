#pragma once
#include "IGetSystemInfo.h"
#include <string>

class GetMemoryInfo : public virtual IGetSystemInfo {
private:
  std::string buffer;

public:
  std::string getInfo() override;
};