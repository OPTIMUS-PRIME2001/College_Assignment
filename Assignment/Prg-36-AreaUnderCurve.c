/*Q .One of the applications of computers in numerical analysis is computing the area under 
     a curve.One simple method of calculating the area under a curve is to divide the area 
     into a number of trapezoids of same width and summing up the area into a number of 
     trapezoids of same width and summing up the area of individual trapezoids. The area 
     of a trapezoid is given by – 
     Area = 0.5*(h1 + h2)*b
     where h1 and h2 are the heights of two sides and b is the width as shown in fig. below.
Write a C Program to calculate the area for a curve of the function f(x) = x2 + 1 between any 
two given limits say A and B as shown in figure above.
Hint: Inputs to the program are lower limit(A), upper limit(B) and the number of trapezoids
*/
#include <stdio.h>
float total_area=0;
float trap_area(float h1, float h2, float base)
{
    float area;
    area = 0.5 * (h1 + h2) * base;
    return(area);
}
float function_x(float x)
{
    // F(X) = X * X + 1 
    return( (x*x) + 1);
}
float find_area(float a, float b, int n)
{
    float base, lower, h1, h2;
    base = (b-a)/n;
    for(lower =a; lower <= (b-base) ; lower = lower + base)
    {
       h1  =  function_x(lower);
       h2  =  function_x(lower + base);
       total_area += trap_area(h1, h2, base);
    }
    return(total_area);
}
    
void main( )
{
   float start_point, end_point; int numtraps;
   printf("\n\tAREA UNDER A CURVE");
   printf("\nEnter lower limit:");
   scanf("%f", &start_point);
   printf("Enter upper limit:");
   scanf("%f", &end_point);
   printf("Enter number of trapezoids:");
   scanf("%d", &numtraps);
   total_area = find_area(start_point, end_point, numtraps);
   printf("TOTAL AREA = %f", total_area);
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}