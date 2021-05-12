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
    (year%4==0 && year%100!=0)?printf("%d is a LEAP YEAR",year):
    (year%400==0)?printf("%d is a LEAP YEAR",year):printf("%d is NOT a LEAP YEAR",year);
    
    /*
    if(year%400==0 || (year%4==0 && year%100!=0))
       { 
           printf("%d is a LEAP YEAR",year);
       }       
    
    else
    {
       printf("%d is NOT a LEAP YEAR",year);
    }
    */
}