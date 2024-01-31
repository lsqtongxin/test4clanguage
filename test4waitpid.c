#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/errno.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        // fork 失败
        perror("Fork failed");
        exit(1);
    }

    if (pid == 0) {
        // 子进程
        printf("Child process with ID %d\n", getpid());
        sleep(3);
        printf("Child process exiting...\n");
        exit(0);
    } else {
        // 父进程
        int status;
        printf("WNOHANG is %d\n",WNOHANG);
        while (waitpid(-1, &status, WNOHANG) == 0) {
            printf("Child is still running...\n");
            sleep(1);
        }
        if (errno == ECHILD) {
            perror("c_program wait error");
        }
        printf("Child has exited. Parent process exiting...\n");
    }

    return 0;
}
