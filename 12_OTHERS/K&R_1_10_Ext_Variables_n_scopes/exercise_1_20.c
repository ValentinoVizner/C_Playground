/* K&R C,  Exercise 1-20.
Wizner  2020 Mar 22 */
#include <stdio.h>
#define MAXLINE 1000 /* maximum input line lenght */
#define SPACES 4     /* how much chars to place */

/* replace tab on 4 spacese */

int main() {
  char c;
  char wotab[MAXLINE]; /* line without tabs */
  int i, sps;

  i = 0;
  while ((c = getchar()) != EOF) {
    if (i == (MAXLINE - 2)) { /* protects against overflow */
      wotab[i] = '\n';
      ++i;
      wotab[i] = '\0';
      printf("%s\n", wotab);
      printf("LINE IS GREATER THAN 1000 CHAR\n");
    } else if (c == '\t') {
      for (sps = SPACES; sps > 0; --sps) {
        wotab[i] = ' ';
        ++i;
      }
    } else if (c == '\n') {
      wotab[i] = '\n';
      ++i;
      wotab[i] = '\0';
      printf("%s", wotab);
      i = 0;
    } else {
      wotab[i] = c;
      ++i;
    }
  }
  return /*removed*/ 0;
}