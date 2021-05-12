/*Q. Write a C Program to print the first n integer numbers not divisible 
by 7(using for and if statement)
*/
#include<stdio.h>
void main()
{ int n;
  printf("\nEnter how many numbers you want to print not divissible by 7 starting from 1: ");
  scanf("%d",&n);
  printf("The first %d numbers not divisible by 7 are:\n",n);
  for(int i=1; i<=n; i++)
  {
      if(i%7!=0)
      { printf("%d , ",i);
      }
      else
      { n+=1;}      
  }  
}