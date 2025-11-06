#include "../include/FileReader.h"

void FileReader::openFile(std::string filePath) {
  file.open(filePath);

  if (!file.is_open()) {
    throw std::runtime_error("Error to open " + filePath);
  }
}

std::string FileReader::getFileContents() {
  std::ostringstream buffer;
  buffer << file.rdbuf();

  return buffer.str();
}

FileReader::~FileReader() { file.close(); }