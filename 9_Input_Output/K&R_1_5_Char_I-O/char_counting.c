#include <stdio.h>

// count characters in input; 2nd version
int main() {
    long char_count;
    for (char_count = 0; getchar() != EOF; ++char_count);

    printf("%ld\n", char_count);
    return 0;
}