/*Q. Write a C Program  to find the area and circumference of a circle. 
(value of radius must be given by user and use the concept of symbolic
constants)*/
#include<stdio.h>
#include<math.h>
#include<stdio.h>
const float pi= 3.14;
void main()
{ float r, Circumference, Area;
  printf("\n\nEnter radius of the Circle:");
  scanf("%f", &r);
  Circumference = 2 * pi * r;
  // Circumference = 2 * M_PI * r;
  Area = pi * r * r;
  // Area = M_PI * pow(r,2);
  printf("\n\tFormula\n Circumference = 2 * Pi * radius\n");
  printf(" Area = Pi * radius^2");
  printf("\n\nCircumference of the Circle: %f", Circumference);
  printf("\nArea of the Circle: %f", Area);
  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}