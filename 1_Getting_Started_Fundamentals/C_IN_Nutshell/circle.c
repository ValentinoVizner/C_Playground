/*******************************
C in Nutshell Program 1
   --------

source code. The program in Example 1-1 defines two functions, main()  and circularArea(). 
The main() function calls circularArea() to obtain the area of a circle with a given radius, 
and then calls the standard library function printf() to output the results in formatted strings on the console. 

   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 28.03.2020

******************************************************/
#include <stdio.h>  // Preprocessor directives

double circular_area(double radius);  // Function declaration (prototype form)

int main(void) {
    double radius = 1.0, area = 0.0;

    printf("    Areas of Circles\n\n");
    printf(
        "    Radius        Area\n"
        "----------------------\n");
    area = circular_area(radius);
    printf("%10.1f  %10.2f\n", radius, area);

    radius = 5.0;
    area = circular_area(radius);
    printf("%10.1f  %10.2f\n", radius, area);
    return 0;
}
// The function circularArea() calculates the area of a circle
// Parameter:    The radius of the circle
// Return value: The area of the circle

double circular_area(double radius) {        // Defines the area of a circular_area begins here
    const double pi = 3.141592653589793238;  // Pi is constant
    return pi * radius * radius;
}