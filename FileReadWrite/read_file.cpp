//
// Created by plott on 4/13/22.
//

#include "read_file.h"

std::string read_file(std::string& filename){
    std::string s;
    std::ifstream in_file;
    in_file.open(filename, std::ios::in);
    while(!in_file.eof()){
        std::string t;
        in_file >> t;
        if (s.size()==0){
            s = t;
        }
        else{
            s = s + "\n" + t;
        }
    }

    in_file.close();
    return s;
}

std::string read_file2(std::string& filename){
    std::string s;
    std::ifstream in_file;
    in_file.open(filename, std::ios::in);
    if (in_file.is_open()){
        std::string t;
        while(std::getline(in_file,t)){
            if (s.size()==0){
                s = t;
            }
            else{
                s = s + "\n" + t;
            }
        }
    }
    in_file.close();
    return s;
}

std::string read_file3(std::string& filename){
    std::string s;
    std::ifstream in_file;
    in_file.open(filename, std::ios::in);
    if (in_file.is_open()){
        while(in_file){
            std::string t;
            t = in_file.get();
            if (s.size()==0){
                s = t;
            }
            else{
                s = s + "\n" + t;
            }
        }
    }
    in_file.close();
    return s;
}

std::vector<std::string> read_complete_file(std::string& filename){
    std::vector<std::string> lines;
    std::string s;
    std::ifstream in_file;
    in_file.open(filename, std::ios::in);
    if (in_file.is_open()){
        while (std::getline(in_file, s)){
            lines.push_back(s);
        }
    }
    in_file.close();
    return lines;
}

double read_file_double(std::string& filename){
    double x;
    std::ifstream in_file;
    in_file.open(filename, std::ios::in | std::ios::binary);
    in_file >> x ;
    in_file.close();
    return x;
}