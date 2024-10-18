#include <stdio.h>
#include <unistd.h>

#define MAX_COUNT 150

int main() {
    printf("Parent process: PID %d, PPID %d\n", getpid(), getppid());
    for (int i = 0; i < MAX_COUNT; i ++) {
        printf("Parent process: line %d\n", i);
        usleep(2000);
    }
}
