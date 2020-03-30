/******************************************************
KNKing Program 2
   ---------
To illustrate scanf's ability to match patterns, consider the problem of reading a fraction entered by the user.
Fractions are customarily written in the form numera-tor/denominator.
Instead of having the user enter the numerator and denominator of a fraction as separate integers, scanf makes it possible to read the entire frae-tion.
   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 26.03.2020

******************************************************/
#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num1, result_denom;

    printf("Print first fraction: ");
    scanf("%d / %d", &num1, &denom1);

    printf("Print first fraction: ");
    scanf("%d / %d", &num2, &denom2);

    result_num1 = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The result is %d/%d\n", result_num1, result_denom);
    return 0;
}
