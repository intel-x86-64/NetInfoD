#include "../include/FileReader.h"

bool FileReader::openFile(std::string filePath) {
  file.open(filePath);

  if (!file.is_open()) {
    std::cerr << "Error to open " << filePath << std::endl;
    return 1;
  }

  return 0;
}

std::string FileReader::getFileContents() {
  std::string buffer;
  std::string line;

  while (std::getline(file, line)) {
    buffer += line;
    buffer += "\n";
  }

  return buffer;
}

FileReader::~FileReader() { file.close(); }