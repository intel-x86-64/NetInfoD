#pragma once

#include <fstream>
#include <iostream>
#include <string>

class FileReader {
private:
  std::ifstream file;

public:
  bool openFile(std::string filePath);
  std::string getFileContents();
  ~FileReader();
};