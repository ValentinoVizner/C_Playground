#include <stdio.h>

// Coppy input to output; 2nd version
int main() {
    int c;
while ((c = getchar()) != EOF) {
        putchar(c);
    // printf("%d", c != EOF);
    }
    //Exercsise 1-6.  Verify that the expression  getchar() != EOF  is 0 or 1.
    printf("\n%d.\n", c != EOF);
    return 0;
}