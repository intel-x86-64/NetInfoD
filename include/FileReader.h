#pragma once

#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

class FileReader {
private:
  std::ifstream file;

public:
  void openFile(std::string filePath);
  std::string getFileContents();
  ~FileReader();
};