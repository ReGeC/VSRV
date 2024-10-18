#include <stdio.h>
#include <unistd.h>

#define MAX_COUNT 100

int main() {
    printf("Child process: PID %d, PPID %d\n", getpid(), getppid());
    for (int i = 0; i < MAX_COUNT; i ++) {
        printf("Child process: line %d\n", i);
        usleep(1000);
    }
}
