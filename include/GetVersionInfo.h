#pragma once
#include "FileReader.h"
#include "IGetSystemInfo.h"
#include <string>

class GetVersion : public virtual IGetSystemInfo {
private:
  FileReader fileReader;

public:
  std::string getInfo() override;
};