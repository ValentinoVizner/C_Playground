#include <stdio.h>
#define MAXLINE 1000
// Exercise 1-19.  Write a function reverse(s)  that reverses the character
// string s. Use it to write a program that reverses its input a line at a time.

int getlines(char line[], int maxline);
void reverse(char reversed[]);

int main() {
  int len;
  char line[MAXLINE]; /* current input line */
  while ((len = getlines(line, MAXLINE)) > 0) {
    reverse(line);
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

void reverse(char string[]) {
  int count, begin, end;
  int reversed[MAXLINE];
  for (begin = 0; string[begin] != '\0'; ++begin)
    count++;
  printf("%d", count);
  ;
  end = count - 1;
  for (begin = 0; begin < count; ++begin) {
    reversed[begin] = string[end];
    --end;
    printf("%c", reversed[begin]);
  }
}