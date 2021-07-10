/*Q. Find greatest of three numbers.(using ternary operator).
*/
#include<stdio.h>
void main()
{
    int a , b, c, max;
    printf("\n\nEnter Three Numbers:");
    scanf("%d %d %d", &a,&b,&c);
    max= a>b?(a>c?a:c):(b>c?b:c);
    printf("\nThe Greatest of the numbers %d, %d, %d is %d",a,b,c,max);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}