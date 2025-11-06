#include "../include/FileReader.h"
#include <sstream>

bool FileReader::openFile(std::string filePath) {
  file.open(filePath);

  if (!file.is_open()) {
    std::cerr << "Error to open " << filePath << std::endl;
    return 0;
  }

  return 1;
}

std::string FileReader::getFileContents() {
  std::ostringstream buffer;
  buffer << file.rdbuf();

  return buffer.str();
}

FileReader::~FileReader() { file.close(); }