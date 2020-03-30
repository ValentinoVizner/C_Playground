
/******************************************************
   KNKing Project 2
   --------


Write a program that computes the volume of a sphere with a 10-meter radius, using the for-mula v = 4/3Ttr3. 
Write the fraction 4/3 as 4 . Of/ 3 . Of. (Try writing it as 4/3. What hap-pens?) 
Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice to compute
   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 25.03.2020

******************************************************/

#include <math.h>
#include <stdio.h>
#define M_PI 3.14159265358979323846
#define RADIUS_CUBE(r) (r * r * r)

int main(void) {
    int radius = 0;
    float volume;
    printf("Enter radius for Calculating volume of sphere: ");
    scanf("%d", &radius);

    volume = (4.0f / 3.0f) * M_PI * RADIUS_CUBE(radius);

    printf("\n Sphere volume is: %f\n", volume);

    return 0;
}