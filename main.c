#include <stdio.h>
#include <unistd.h>

int main (int argc, char ** argv) {
    printf("Beginning of program\n");
    
    int counter = 0;
    pid_t pid = fork();

    if(pid == 0) {  // Child Process

        for(int i = 0; i < 10; ++i) {
            printf("child process: counter=%d\n", ++counter);
        }

    } else if (pid > 0) { // Parent Process

        for (int j = 0; j < 10; ++j);
        printf("parent process: counter=%d\n", ++counter);

    } else { //fork failed
        printf("fork() failed!\n");
        return 1;
    }

    printf("end of program\n");
    return 0;
}