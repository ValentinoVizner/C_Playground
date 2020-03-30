/******************************************************
   KNKing Project 5
   --------
Write a program that asks the user to enter a value for x and then displays the value of the following polynomial: 3.15 + 2v4 —5x3 —x2 + 7x 6 

Hint: C doesn't have an exponentiation operator, so you'll need to multiply x by itself repeatedly in order to compute the powers of x. (For example, x * x * x is x cubed.) 

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
           (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6);

    return 0;
}