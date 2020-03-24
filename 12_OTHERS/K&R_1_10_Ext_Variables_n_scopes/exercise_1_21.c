/******************************************************
   KnR 1-21
   --------
   Write a program "entab" which replaces strings of
   blanks with the minimum number of tabs and blanks
   to achieve the same spacing.

   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com

******************************************************/

#include <stdio.h>

#define TABSIZE 4

int main() {
  int c = 0;
  int i = 0;
  int spaceCount = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++spaceCount;
      if (spaceCount == TABSIZE) {
        spaceCount = 0;
        putchar('\t');
      }
    } else {
      for (i = 0; i < spaceCount; ++i) {
        putchar(' ');
      }
      spaceCount = 0;
      putchar(c);
    }
  }
  return 0;
}
