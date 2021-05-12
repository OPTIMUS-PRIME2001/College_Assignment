//Q. Write a C Program to find the average of five numbers
#include<stdio.h>
#include<stdlib.h>
int main()
{  float a,b,c,d,e,avg;
   printf("Enter Five Numbers:");
   scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
   avg= (a+b+c+d+e)/5;
   printf("Average of the 5 numbers is: %f",avg);
  
  /*int n;
  printf("How many numbers You want to enter:"); 
  scanf("%d",&n);
  printf("Enter the Numbers:");
  float NUM[n],avg,sum=0;
  for(int i=0;i<n;i++)
  { 
      scanf("%f", &NUM[i]);
      sum = sum + NUM[i];
  }
  avg = sum/n;
  printf("Average of the %d numbers is: %f",n,avg);
  */
   return 0;
}