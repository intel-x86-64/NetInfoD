#include "../include/GetUptimeInfo.h"

std::string GetUptimeInfo::getInfo() {
  fileReader.openFile("/proc/uptime");
  return fileReader.getFileContents();
}