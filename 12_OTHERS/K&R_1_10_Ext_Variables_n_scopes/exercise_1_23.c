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
/*
   This solution does not deal with other special cases, such as
   trigraphs, line continuation with \, or <> quoting on #include,
   since these aren't mentioned up 'til then in K&R2.  Perhaps this is
   cheating.

   Note that this program contains both comments and quoted strings of
   text that looks like comments, so running it on itself is a
   reasonable test.  It also contains examples of a comment that ends
   in a star and a comment preceded by a slash.  Note that the latter
   will break C99 compilers and C89 compilers with // comment
   extensions.

   Interface: The C source file is read from stdin and the
   comment-less output is written to stdout. **/

#include <stdio.h>

int main() {
  FILE *in = fopen("exercise_1_20.c", "r");
  FILE *out = fopen("exercise.txt", "w");
  int c;

  while ((c = fgetc(in)) != EOF) {
    if (c == '/') {

      int flag = 0;
      c = fgetc(in);
      if (c == '/') {

        int flag = 1;
        while ((c = fgetc(in)) != '\n')
          ;

      } else if (c == '*') {
        int flag = 1;
        while ((c = fgetc(in)) != EOF) {
          if ((c = fgetc(in)) == '*' && (c = fgetc(in) == '/')) {
            c = '\n';
            break;
          }
        }
      }
    }

    fputc(c, out);
  }
  fclose(in);
  fclose(out);
  return 0;
}