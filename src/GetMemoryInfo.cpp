#include "../include/GetMemoryInfo.h"

std::string GetMemoryInfo::getInfo() {
  fileReader.openFile("/proc/meminfo");
  return fileReader.getFileContents();
}