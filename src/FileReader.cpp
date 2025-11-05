#include "../include/FileReader.h"

bool FileReader::openFile(std::string filePath) {
  file.open(filePath);

  if (!file.is_open()) {
    std::cerr << "Error to open " << filePath << std::endl;
    return 1;
  }

  return 0;
}

FileReader::~FileReader() { file.close(); }