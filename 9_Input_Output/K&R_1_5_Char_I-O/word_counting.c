#include <stdio.h>
#define IN 1  // inside the word
#define OUT 0 // outside the word

// count lines, words and characters in input

/*
Exercise 1-11.  How would you test the word count program? What kinds of input
are most likely to uncover bugs if there are any?

Explanation
Testing the word count program involves, giving three kinds of inputs.

Valid Inputs.
Boundary Condition Inputs.
Invalid Inputs.
For Valid Inputs, it could be any stream of space separate text. It has valid
space, newline and tab characters. For Boundary conditions, a file entirely
consisting of n, or a file entirely consisting of t character or a empty file.

For invalid Inputs, an unclosed file which does not have EOF, which is tricky to
provide can be given to this program. A unicode character file can be given and
see if getchar() handles it properly. We tested it and it works.
*/
int main() {
  int c, count_lines = 0, count_words = 0, count_chars = 0, state;

  state = OUT;
  while ((c = getchar()) != EOF) {
    ++count_chars;
    if (c == '\n') {
      ++count_lines;
    }
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++count_words;
    }
  }
  printf("%d %d %d\n", count_lines, count_words, count_chars);
  return 0;
}
