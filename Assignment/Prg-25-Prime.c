/*Q. Write a C Program to find whether a number is prime or not. 
(using for and if statements)
*/
#include<stdio.h>
#include<math.h>
void main()
{  int num, flag;
   printf("\n\nEnter a Number:");
   scanf("%d", &num);
   if(num==1)
   {
       printf("%d is neither Prime nor Composite",num);
   }
   else
   {
       for(int i=2; i<=sqrt(num); i++)
       {
         if(num%i==0)
         { 
           flag=1;
           break;
         }
       }
      if(flag==1)
        { printf("%d  is a Composite\n",num); }
       else 
        { printf("%d is a Prime\n",num); } 
   }
}