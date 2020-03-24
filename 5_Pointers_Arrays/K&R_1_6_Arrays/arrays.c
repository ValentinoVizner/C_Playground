#include <stdio.h>

// count digits, whitespace, others
int main() {
  int c, i, count_others = 0, count_wspaces = 0;
  int num_digits[10];

  for (i = 0; i < 10; ++i) {
    num_digits[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++num_digits[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++count_wspaces;
    else
      ++count_others;
  }

  printf("digits=");
  for (i = 0; i < 10; ++i) {
    printf(" %d", num_digits[i]);
  }
  printf(", whitespace= %d, others= %d", count_wspaces, count_others);
  return 0;
}