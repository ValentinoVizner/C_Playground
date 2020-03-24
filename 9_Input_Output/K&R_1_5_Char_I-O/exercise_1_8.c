#include <stdio.h>

//Exercise 1-8.  Write a program  to count blanks, tabs, and newlines

int main() {

    int c, count_blanks = 0, count_tabs = 0, count_newlines = 0;

    printf("Input some characters, then press Ctrl+D.\n");
    while((c = getchar()) != EOF) {
        if (c == ' ' )
            ++count_blanks;
        else if (c == '\t')
            ++count_tabs;
        else if (c == '\n')
            ++count_newlines;
    }
    printf("Number of blanks: %d\n", count_blanks);
    printf("Number of tabs: %d\n", count_tabs);
    printf("Number of newlines: %d\n", count_newlines);
    return 0;
}