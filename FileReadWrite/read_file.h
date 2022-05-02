//
// Created by plott on 4/13/22.
//

#ifndef FILEREADWRITE_READ_FILE_H
#define FILEREADWRITE_READ_FILE_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::string read_file(std::string& filename);
std::string read_file2(std::string& filename);
std::string read_file3(std::string& filename);

std::vector<std::string> read_complete_file(std::string& filename);
double read_file_double(std::string& filename);

#endif //FILEREADWRITE_READ_FILE_H
