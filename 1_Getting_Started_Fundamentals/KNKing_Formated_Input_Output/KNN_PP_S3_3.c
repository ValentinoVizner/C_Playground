/*******************************
KNKing Project 3
   --------

Books are identified by an International Standard Book Number (ISBN). ISBNs assigned after January I , 2007 contain 13 digits, arranged in five groups, 
such as 978-0-393-97950-3v (Older ISBNs use 10 digits.) The first group (the GSI pr</ix) is currently either 978 or 979. 
The group identifier specifies the language or country or origin (for example, and I are used in English-speaking countries). 
The publisher code identifies the publisher (393 is the code for W. W. Norton), 
The itetn nujnber is assigned by the publisher to identify a specific book (97950 is the code for this book), 
An ISBN ends with a check digit thaÜs used to verify the accuracy of the preceding digits. 

Write a program that breaks down an ISBN entered by the user

   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 26.03.2020

******************************************************/
#include <stdio.h>

int main(void) {
    int gsi, group_id, pub_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",
          &gsi, &group_id, &pub_code, &item_num, &check_digit);
    printf("GSI prefix: %d\nGroup identifier: %d\n", gsi, group_id);
    printf("Publisher code: %d\nItem number: %d\nCheck digit: %d\n",
           pub_code, item_num, check_digit);

    return 0;
}