#include "../include/GetVersionInfo.h"

std::string GetVersion::getInfo() {
  fileReader.openFile("/proc/version");
  return fileReader.getFileContents();
}