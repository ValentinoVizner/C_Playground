/******************************************************
KNKing Project 2
   --------

Write a program that formats product information entered by the user. 
A session with the program should look like this: 
Enter item number: 583 
Enter unit price: 13.5 
Enter purchase date (mm/dd/yyyy) : 10/24/2010 
item    Unit Price      Purchase Date 
583         $ 13.50     10/24/2010 

   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 26.03.2020

******************************************************/
#include <stdio.h>

int main(void) {
    int item_number, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item number\t\t Unit price\t\t Purchase date\n");
    printf("%d\t\t\t $  %.1f\t\t\t %d/%d/%d\n", item_number, price, day, month, year);

    return 0;
}