#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    char str[10] = "";
    scanf("%s", str);
    while (strcmp("exit", str)) {
	printf("%s\n", str);
        scanf("%s", str);
    }
}
