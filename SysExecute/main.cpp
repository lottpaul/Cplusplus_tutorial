#include <iostream>
#include "system_call.h"
#include "fork_call.h"



int main() {
    std::cout << "Calling 'system()' System Call" << std::endl;
    simple_system_call();

    std::cout << "Calling 'fork' & 'execve' System Call" <<std::endl;
    fork_system_call();
    return 0;
}
