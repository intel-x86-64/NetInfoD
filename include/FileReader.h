#pragma once

#include <fstream>
#include <iostream>
#include <string>

class FileReader {
private:
  std::ifstream file;

public:
  void openFile(std::string filePath);
  std::string getFileContents();
  ~FileReader();
};