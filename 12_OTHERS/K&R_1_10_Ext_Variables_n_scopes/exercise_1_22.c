/******************************************************
   KnR 1-22
   --------
Write a program to fold long input lines into two or more shorter lines after
the last non-blank character that occurs before the n-th column of input. Make
sure your program does something intelligent with very long lines, and if there
are no blanks or tabs before the specified column..

   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 2020 March 22.

******************************************************/

#include <stdio.h>

#define COLUMN_WIDTH 80
#define MAX_LINE 1000

int main() {
  char currentWord[MAX_LINE];
  int i;
  for (i = 0; i < MAX_LINE; ++i)
    currentWord[i] = '\0';

  int c, length, pos;
  pos = 0;
  length = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      // End buffered word
      currentWord[pos] = '\0';
      // Wrap word
      if (length + pos >= COLUMN_WIDTH) {
        printf("\n");
        length = pos;
      } else {
        if (c == '\n')
          length = 0;
        if (c == '\t')
          length = length + 4;
        else
          length++;
      }
      printf("%s", currentWord);
      putchar(c);
      pos = 0;
    } else {
      // Buffer word
      currentWord[pos] = c;
      ++pos;
    }
    ++length;
  }
  return 0;
}