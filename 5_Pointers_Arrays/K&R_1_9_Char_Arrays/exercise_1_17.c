#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

// print the longest input line
int main() {
  int len;               /* current line length */
  char line[MAXLINE];    /* current input line */
  char longest[MAXLINE]; /* longest line saved here */
  while ((len = getlines(line, MAXLINE)) > 0)
    if (len > 80) {
      printf("%s\n", line);
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