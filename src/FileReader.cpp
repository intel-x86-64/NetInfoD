#include "../include/FileReader.h"
#include <iostream>

bool FileReader::openFile(std::string filePath) {
  std::ifstream file(filePath);

  if (!file.is_open()) {
    std::cerr << "Error to open " << filePath << std::endl;
    return 1;
  }

  return 0;
}