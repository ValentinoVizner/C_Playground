#include <stdio.h>
// count lines in input
int main() {
    int line_count, c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++line_count;
        }
    }
    printf("Number on lines is: %d\n", line_count);
    return 0;
}