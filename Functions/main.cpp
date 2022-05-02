#include <iostream>
#include "functions.h"

int main() {
    std::cout << add(1,2) << std::endl;
    std::cout << add(1, 2.0f) << std::endl;
    std::cout << add(1.0f, 2.0f) << std::endl;
    std::string a = "Hello ";
    std::string b = "World";
    std::cout << add(a, b) << std::endl;
    return 0;
}
