/*Q. Write a C Program to read in the age of a person as an integer number 
in years and print the three immediate integral range of the age entered. 
For example if the user enters 25, then the output will print the three 
immediate integral ranges: 24 to 26, 23 to 27 and 22 to 28.
*/
#include<stdio.h>
#include<stdio.h>
int main()
{  int age,a,b;
   printf("\n\nEnter the age of the Person:");
   scanf("%d",&age);
   a=b=age;
   printf("\nFirst Integral Range: %d to %d",--a,++b);
   printf("\nSecond Integral Range: %d to %d",--a,++b);
   printf("\nThird Integral Range: %d to %d",--a,++b);
   return 0;
}