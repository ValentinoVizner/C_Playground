#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

// print the longest input line
int main() {
  int len;               /* current line length */
  int max;               /* maximum length seen so far */
  char line[MAXLINE];    /* current input line */
  char longest[MAXLINE]; /* longest line saved here */
  max = 0;
  while ((len = getlines(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0) /* there was a line */ {
    printf("The longest line is: ");
    printf("%s\n", longest);
    printf("The length of the longest line is: %d\n", max);
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

/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}