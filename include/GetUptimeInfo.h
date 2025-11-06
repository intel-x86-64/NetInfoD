#pragma once
#include "FileReader.h"
#include "IGetSystemInfo.h"
#include <string>

class GetUptimeInfo : public virtual IGetSystemInfo {
private:
  FileReader fileReader;

public:
  std::string getInfo() override;
};