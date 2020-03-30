/******************************************************
   KNKing Program 2
   --------
  Converting from Fahrenheit to Celsius The following program prompts the user to enter a Fahrenheit temperature; it then prints the equivalent Celsius temperature.
  The output of the program will have the following appearance (as usual, input entered by the user is underlined):
  Enter Fahrenheit temperature: 212
  Celsius equivalent: 100. 0

  The program will allow temperatures that aren't integers; that's why the Celsius temperature is displayed as 100 . 0 instead of 100.

   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 25.03.2020

******************************************************/

#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = SCALE_FACTOR * (fahrenheit - FREEZING_PT);

    printf("Celsius equivalent: %.1f\n", celsius);
    return 0;
}