#include <stdio.h>

#define NUM_CHARS 128

int main(void) {
  int c;
  int char_frequencies[NUM_CHARS + 1];
  int i;

  for (i = 0; i <= NUM_CHARS; ++i)
    char_frequencies[i] = 0;

  printf("Input some characters, then press Ctrl+D.\n");
  while ((c = getchar()) != EOF)
    ++char_frequencies[c];

  printf("\n Char | Count\n");
  for (i = 0; i <= NUM_CHARS; ++i)
    if (char_frequencies[i] > 0)
      printf(" %5c : %5d\n", i, char_frequencies[i]);

  return 0;
}