//
// Created by plott on 5/2/22.
//

#ifndef SYSEXECUTE_FORK_CALL_H
#define SYSEXECUTE_FORK_CALL_H
#include <iostream>
#include <unistd.h>

//Forking will create a new process
// The original process is known as the parent process and the new process is the child process
int fork_system_call(){
    pid_t child_pid = fork();
    if (child_pid ==-1){
        perror("Fork Failed");
        exit(EXIT_FAILURE);
    } else if (child_pid > 0){
        std::cout << "Printed from Parent Process: " << getpid() << std::endl;
        std::cout << "Spawned child with process id: " << child_pid << std::endl;
        return child_pid;
    } else{
        std::cout << "Printed from Child Process: " << getpid() << std::endl;
        std::cout << "Executing the command" << std::endl;
        execve("sleep", nullptr, nullptr);
        perror("Failed to Execute");
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
#endif //SYSEXECUTE_FORK_CALL_H
