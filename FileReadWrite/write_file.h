//
// Created by plott on 4/13/22.
//

#ifndef FILEREADWRITE_WRITE_FILE_H
#define FILEREADWRITE_WRITE_FILE_H
//https://www.learncpp.com/cpp-tutorial/header-guards/

#include <string>

//https://www.cplusplus.com/doc/tutorial/files/

void write_file(std::string& filename, std::string& data);
void write_binary_double(std::string& filename, double value);
void write_string_double(std::string& filename, double value);
void append_file(std::string& filename, std::string& data);

#endif //FILEREADWRITE_WRITE_FILE_H
