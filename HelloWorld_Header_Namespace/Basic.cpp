//
// Created by plott on 4/11/22.
//

#include "Basic.h"
#include <iostream>

void hello::hello_world(int country){
    switch(country){
        case 1:
            std::cout << hello_us << std::endl;
            break;
        case 2:
            std::cout << hello_uk << std::endl;
            break;
        case 3:
            std::cout << hello_fi << std::endl;
            break;
    }
}