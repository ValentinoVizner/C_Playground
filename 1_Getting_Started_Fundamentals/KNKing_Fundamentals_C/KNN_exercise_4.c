
/******************************************************
   KNKing Exercise 4
   --------

Write a program that declares several int and float variables—without initializing them—and then prints their values. 
Is there any pattern to the values? (Usually there isn't.) 

   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 26.03.2020

******************************************************/

#include <stdio.h>

int main(void) {
    int a, b, c, d;
    float a1, b1, c1, d1;

    printf("integers: %d, %d, %d, %d\n", a, b, c, d);
    printf("floats: %f, %f, %f, %f\n", a1, b1, c1, d1);

    return 0;
}

// Conclusion: We got MUMBO JUMBO values if we do not INITALIZE them.