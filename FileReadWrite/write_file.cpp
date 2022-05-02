//
// Created by plott on 4/13/22.
//

#include "write_file.h"
#include <fstream>

void write_file(std::string& filename, std::string& data){
    std::ofstream out_file;
    out_file.open(filename, std::ios::out);
    out_file << data;
    out_file.close();
}

void write_binary_double(std::string& filename, double value){
    std::ofstream out_file;
    out_file.open(filename, std::ios::out| std::ios::binary);
    out_file.write(reinterpret_cast<const char*>(&value), sizeof(double));
    out_file.close();
}

void write_string_double(std::string& filename, double value){
    std::ofstream out_file;
    out_file.open(filename, std::ios::out);
    out_file << value;
    out_file.close();
}


void append_file(std::string& filename, std::string& data){
    std::ofstream out_file;
    out_file.open(filename, std::ios::out | std::ios::app);
    out_file << data;
    out_file.close();
}
