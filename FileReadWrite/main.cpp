#include <iostream>
#include <string>
#include "write_file.h"
#include "read_file.h"


int main() {
    std::string s {"Hello\nWorld\n3.4.2\t1-800-555-5555\n"};
    std::string t {"<<END PAGE>>\n"};
    double value = 2.2f;

    std::string txt_fn {"TestFile.txt"};
    std::string dbl_txt_fn {"TestDbl.txt"};
    std::string dbl_fn {"TestDbl.bin"};

    write_file(txt_fn, s);
    write_binary_double(dbl_fn, value);
    write_string_double(dbl_txt_fn, value);
    append_file(txt_fn, t);

    std::cout << "Importing File using stream" << std::endl;
    std::string input;
    input = read_file(txt_fn);
    std::cout << input << std::endl;

    std::cout << "Importing File using std::getline" << std::endl;
    std::string input2;
    input2 = read_file2(txt_fn);
    std::cout << input2 << std::endl;

    std::cout << "Importing File using fstream.get" << std::endl;
    std::string input3;
    input3 = read_file3(txt_fn);
    std::cout << input3 << std::endl;

    std::cout << "Importing File into vector of strings" << std::endl;
    std::vector<std::string> data = read_complete_file(txt_fn);
    for(auto i: data){
        std::cout << i << std::endl;
    }

    std::cout << "Reading a double" << std::endl;
    double input_dbl;
    input_dbl = read_file_double(dbl_txt_fn);
    std::cout << input_dbl << std::endl;

    return 0;
}
