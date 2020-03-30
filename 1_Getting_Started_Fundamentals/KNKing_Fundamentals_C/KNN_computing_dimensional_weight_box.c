/******************************************************
   KNKing Program 1
   --------
  Shipping companies don't especially like boxes that are large but very light, since they take up valuable space in a truck or airplane. 
  In fact, companies often charge extra for such a box, basing the fee on its volume instead of its weight. 
  In the United States. the usual method is to divide the volume by 166 (the allowable num-ber of cubic inches per pound). 
  If this number—the box's "dimensional" or "volu-rnetric" weight—exceeds its actual weight, the shipping fee is based on the dimensional weight. 
  (The 166 divisor is for international shipments; the dimen-sional weight of a domestic shipment is typically calculated using 194 instead.) 

  Let's say that you've been hired by a shipping company to write a program that computes the dimensional weight of a box. 
  Since you're new to C, you decide to start off by writing a program that calculates the dimensional weight of a partic-ular box that's 12" x 10" x 8". 
  Division is represented by / in C, so the obvious way to compute the dimensional weight would be weight volume / 166 ; where weight and volume 
  are integer variables representing the box's weight and volume. Unfortunately, this formula isn't quite what we need. 
  In C, when one integer is divided by another. the answer is "truncated": all digits after the decimal point are lost. 
  The volume ofa 12" x 10" x 8" box will be 960 cubic inches. Divid-ing by 166 gives the answer 5 instead of 5.783, so we have in elTect rounded down to the next lowest pound; 
  the shipping company expects us to round up. One solu-tion is to add 165 to the volume before dividing by 166: weight (volume + 165) / 166; 
  A volume of 166 would give a weight of 331/166, or l, 'While a volume of 167 would yield 332/166, or 2. Calculating the weight in this fashion gives us the fol-
   

   Author:  Valentino Vizner
   email: valentino.vizner@gmail.com
   Date: 25.03.2020

******************************************************/
#include <stdio.h>

int main(void) {
    int length, width, height, volume;
    float weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = length * width * height;

    printf("Dimension are %d x %d x %d\n", length, width, height);
    printf("Volume is %d cubic inches\n", volume);
    printf("Weight is %f pounds.\n", (volume / 166.0));

    return 0;
}