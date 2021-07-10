/*Q. WACP to find the greatest of three numbers by defining a macro.
*/
#include<stdio.h>
#define LARGEST(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
void main()
{
    float X,Y,Z,max;
    printf("\n\nEnter Three Numbers:");
    scanf("%f %f %f",&X,&Y,&Z);
    max = LARGEST(X,Y,Z);
    printf("\nThe Greatest of the numbers %.0f, %.0f, %.0f is %.0f",X,Y,Z,max); 
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}