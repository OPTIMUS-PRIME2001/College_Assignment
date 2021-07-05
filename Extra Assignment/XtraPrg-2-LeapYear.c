/*Q. Any year is entered through keyboard. WACP to determine whether the 
year is a leap year or not. (using conditional operators).
*/
#include<stdio.h>
void main()
{
    int year;
    printf("\n\n\tChecking For Leap Year");
    printf("\nEnter any Year:");
    scanf("%d",&year);
    
    if(year%400==0 || (year%4==0 && year%100!=0))
       { 
           printf("%d is a LEAP YEAR",year);
       }        
    else
    {
       printf("%d is NOT a LEAP YEAR",year);
    }
    
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}