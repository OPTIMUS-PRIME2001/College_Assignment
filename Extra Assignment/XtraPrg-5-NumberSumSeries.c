/*Q. Program to Print Number Sum Series
     series:  1 + 2 + 4 + 7 + 11 + 16 +.....
*/
#include<stdio.h>
void main()
{
    int i, n , term =1, sum=0;
    printf("\n Enter number of terms of series you want to see:");
    scanf("%d",&n);
    printf("\nSeries: ");
    for(i=1; i<=n; ++i)
    {
        printf("%d + ",term);
        sum += term;
        term += i;
        
    }
    printf("\nSum of series upto %dth term is: %d",n,sum);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}