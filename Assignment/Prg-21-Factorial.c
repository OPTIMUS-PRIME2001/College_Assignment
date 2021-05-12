/*Q. Write a C Program to calculate factorial of a number without using 
recursion. (using do while loop)
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{  int n,num,fact=1;
   printf("\n\nEnter a number whose factorial you want to know:");
   scanf("%d",&num);
   n=num;
   do
   {  if(num!=0)
        {fact = fact * num;
        }
      num--;     
   }while(num>=1);
   printf("The Factorial of the number %d is %d",n,fact); 
}