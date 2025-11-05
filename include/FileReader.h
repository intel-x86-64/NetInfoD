#pragma once

#include <string>
class FileReader {
public:
  bool openFile(std::string filePath);
  std::string getFileContents();
  ~FileReader();
};