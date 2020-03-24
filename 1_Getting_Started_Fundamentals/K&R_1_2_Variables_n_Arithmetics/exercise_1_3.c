#include <stdio.h>

/*
Program that prfloats Fahrenheit - Celsius table
    for fahr = 0,20, ... 300
*/

int main() {
  float fahr, celsius;
  const float lower = 0;   /* lower limit of temperature scale */
  const float step = 20.0;   /* step size */
  const float upper = 300.0; /* upper limit of temperature scale */

  printf("Fahrenheit-Celsius table\n");
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}