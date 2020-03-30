/******************************************************
   KNKing Project 6
   --------
Modify the program of Programming Project 5 so that the polynomial is evaluated using the following formula:

((((3x + 2)x-5)x-1)x+7)x-6

Note that the modified program performs fewer multiplications. This technique for evaluating polynomials is known as Horner's Rule.

   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 26.03.2020

******************************************************/
#include <stdio.h>

int main(void) {
    int x = 0;

    printf("Enter value for x: ");
    scanf("%d", &x);
    printf("Result: %d\n",
           ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    return 0;
}