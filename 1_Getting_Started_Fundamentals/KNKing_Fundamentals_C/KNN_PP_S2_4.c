/******************************************************
   KNKing Project 4
   --------
Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added: 

Enter an amount: 100.00 
With tax added: $105.00 
   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 25.03.2020

******************************************************/
#include <stdio.h>
#define TAX_ADDED(amount) (amount * 1.05f)

int main(void) {
    float amount = 0;
    printf("Enter and amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%.2f\n", TAX_ADDED(amount));
    return 0;
}