#include <stdio.h>
#include <unistd.h>   // for fork()

int main() {
    int pid = fork();   // create a child process

    if (pid == 0) {
        // This is the child process
        printf("hello from child\n");
    } else {
        // This is the parent process
        printf("hello from parent\n");
    }

    return 0;
}
