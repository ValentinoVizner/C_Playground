/******************************************************
KNKing Program 1
   --------
    Using printf to Format Numbers The following program illustrates the use of printf to print integers and float-mg-point numbers in various formats. 
   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 26.03.2020

******************************************************/
#include <stdio.h>

int main(void) {
    int i = 40;
    float x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("%10.3f|%-10.3e|%-10g|\n", x, x, x);
    return 0;
}