/*Q. Write a C Program to check whether a number is odd or even. 
(using simple if statement)
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{   int num;
    printf("\n\nEnter a Number:");
    scanf("%d", &num);
    /*if(num%2==0)
    {printf("\n%d is a Even Number",num);}
    else
    {printf("\n%d is a Odd Number",num);}
    */
    
    /*
    if( (num ^ 1) == num + 1)
    {printf("\n%d is a Even Number",num);}
    else
    {printf("\n%d is a Odd Number",num);}
    */

   /*
   if(num&1==1)
    {printf("\n%d is a Odd Number",num);}
    else
    {printf("\n%d is a Even Number",num);}
    */

   /*
   if((num|1)>num)
    {printf("\n%d is a Even Number",num);}
    else
    {printf("\n%d is a Odd Number",num);}
    */

    return 0;    
}