/******************************************************
KNKing Project 7
   --------
Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:

Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71

Display each balance with two digits after the decimal point. 
Hint: Each month, the balance is decreased by the amount of the payment, 
but increased by the balance times the monthly interest rate. To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12.

   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 26.03.2020

******************************************************/
#include <stdio.h>
#define MONTHLY_RATE(interest_rate) (interest_rate / 100.00f)

int main(void) {
    float loan = 0.00f, interest_rate = 0.00f, monthly_payment = 0.00f;

    printf("Enter the amount of loan: ");
    scanf("%f", &loan);
    printf("Enter the interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter the monthly payment: ");
    scanf("%f", &monthly_payment);

    for (int i = 1; i < 13; ++i) {
        loan = (loan - monthly_payment) + (loan * MONTHLY_RATE(interest_rate) / 12.0f);
        printf("Balance remaining after %d month: %.2f\n", i, loan);
    }
    return 0;
}