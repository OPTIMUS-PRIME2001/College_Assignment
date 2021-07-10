/*Q. Write a C Program to check whether a number is odd or even. 
(using simple if statement)
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{   int num;
    printf("\n\nEnter a Number:");
    scanf("%d", &num);
    if(num%2==0)
    {printf("\n%d is an Even Number",num);}
    else
    {printf("\n%d is an Odd Number",num);}
        
    /*
    if( (num ^ 1) == num + 1)
    {printf("\n%d is an Even Number",num);}
    else
    {printf("\n%d is an Odd Number",num);}
    */

   /*
   if(num&1==1)
    {printf("\n%d is an Odd Number",num);}
    else
    {printf("\n%d is an Even Number",num);}
    */

   /*
   if((num|1)>num)
    {printf("\n%d is an Even Number",num);}
    else
    {printf("\n%d is an Odd Number",num);}
    */
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
    return 0;    
}