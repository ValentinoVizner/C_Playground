#include <stdio.h>
#define MAXLINE 1000

// Exercise 1-18.  Write a program  to remove trailing blanks and tabs from each
// line of input, and to delete entirely blank lines.

int getlines(char line[], int maxline);

int main() {
  int len;
  char line[MAXLINE]; /* current input line */
  while ((len = getlines(line, MAXLINE)) > 0) {
    if (len == 1 && line[0] == '\n')
      continue;
  }
  return 0;
}
/* get_line: read a line into s, return length */
int getlines(char s[], int lim) {
  int c, i, l;

  for (i = 0, l = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
    if (i < lim - 1)
      s[l++] = c;
  }
  if (c == '\n') {
    if (l < lim - 1)
      s[l++] = c;
    ++i;
  }
  s[l] = '\0';

  return i;
}