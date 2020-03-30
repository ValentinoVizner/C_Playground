/******************************************************
KNKing => Exercises
   ---------
Exercise 1. printf's

Exercise 2. printf's'
    (a) Exponential notation; left-justified in a field of size 8; one digit after the decimal point. 
    (b) Exponential notation; right-justified in a field of size 10; six digits after the decimal point. 
    (c) Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point. 
    (d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point. 

Exercise 3, 4 and 5 are quite easy and 6 is modified in addfrac.c


   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 28.03.2020

******************************************************/

#include <stdio.h>

int main(void) {
    // Exercises 1
    printf("%6d, %4d\n", 86, 1040);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 12.345);
    printf("%-6.2g\n", .000009979);

    // Exercises 2
    float x = 1023.21312f;
    printf("%8.1e", x);
    printf("%-10.6e", x);
    printf("%8.3f", x);
    printf("%-6.0f", x);
    return 0;
}