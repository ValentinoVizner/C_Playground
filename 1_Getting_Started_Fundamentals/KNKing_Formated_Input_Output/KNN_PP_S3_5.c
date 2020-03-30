/*******************************
KNKing Project 3
   --------

Write a program that asks the user to enter the numbers from I to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement, 
followed by the sums of the rows, columns, and diagonals

Write a program that breaks down an ISBN entered by the user

   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 26.03.2020

******************************************************/

#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
          &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8,
          &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

    printf("\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n",
           n1, n2, n3, n4, n5, n6, n7, n8);

    printf("%3d%3d%3d%3d\n%3d%3d%3d%3d\n\n",
           n9, n10, n11, n12, n13, n14, n15, n16);

    printf("Row sums: %d %d %d %d\n", (n1 + n2 + n3 + n4), (n5 + n6 + n7 + n8),
           (n9 + n10 + n11 + n12), (n13 + n14 + n15 + n16));

    printf("Column sums: %d %d %d %d\n",
           (n1 + n5 + n9 + n13), (n2 + n6 + n10 + n14),
           (n3 + n7 + n11 + n15), (n4 + n8 + n12 + n16));

    printf("Diagonal sums: %d %d\n",
           (n1 + n6 + n11 + n16), (n4 + n7 + n10 + n13));

    return 0;
}