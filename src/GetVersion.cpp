#include "../include/GetVersion.h"

std::string GetVersion::getInfo() {
  fileReader.openFile("/proc/version");
  return fileReader.getFileContents();
}