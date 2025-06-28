#include <stdio.h>

int main() {
    char line[256];
    int line_count = 0;

    while (fgets(line, sizeof(line), stdin)) {
        line_count++;
    }

    printf("%d\n", line_count);

    return 0;
}