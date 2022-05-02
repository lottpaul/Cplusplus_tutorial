//
// Created by plott on 5/2/22.
//

#ifndef SYSEXECUTE_SYSTEM_CALL_H
#define SYSEXECUTE_SYSTEM_CALL_H
#include <iostream>

//Call a system/shell function within the existing process
//Will wait for return value of the process before continuing on
void simple_system_call(){
    int retval = system("sleep 10");
    std::cout << retval << std::endl;
}
#endif //SYSEXECUTE_SYSTEM_CALL_H
