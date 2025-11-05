#pragma once
#include "IGetSystemInfo.h"
#include <string>

class GetMemoryInfo : public virtual IGetSystemInfo {
public:
  std::string getInfo() override;
};