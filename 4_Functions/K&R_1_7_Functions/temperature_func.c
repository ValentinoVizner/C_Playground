#include <stdio.h>

float celsius_to_fahr(float celsius);

int main() {
  float celsius;
  printf("Enter celsius temperature you want to convert to Fahrenheit: \n");
  scanf("%f", &celsius);
  printf("Fahrenheit temperature is: %.1f", celsius_to_fahr(celsius));

  return 0;
}

float celsius_to_fahr(float celsius) {
  const float lower = 0.00;  /* lower limit of temperature scale */
  const float upper = 300.0; /* upper limit of temperature scale */
  if (celsius >= 0.0 && celsius <= 300.0)
    return (9.0 / 5.0) * celsius + 32.0;
}