/* This may look like nonsense, but really is -* - mode: C -*- */
#include <stdio.h>
#include <stdlib.h>

// Printing elements of array and its square
// replace int with void in main to show errors
void main() {
  // Declarations
  double A[5] = {
      [0] = 9.0,
      [1] = 2.9,
      [4] = 3.E+25,
      [3] = .00007,
  };

  // DOing some stuff
  for (size_t i = 0; i < 5; ++i) {
    printf("element %zu is %g, \tits square is %g\n", i, A[i], A[i] * A[i]);
  }
  return EXIT_SUCCESS;
}