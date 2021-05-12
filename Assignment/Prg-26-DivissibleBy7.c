/*Q. Write a C Program to print the first n integer numbers divisible 
by 7(using for and if statement)
*/
#include<stdio.h>
void main()
{ int n;
  printf("\nEnter how many multiples of 7 you want to print starting from 7:");
  scanf("%d",&n);
  printf("The first %d numbers divisible by 7 are:\n",n);
  /*for(int i=1; i<=7*n; i++)
  {
      if(i%7==0)
      { 
          printf("%d , ",i);
      }
  }
  */
  for(int i=1; i<=n; i++)
  {
      printf("%d , ",i*7);
  }
  
}