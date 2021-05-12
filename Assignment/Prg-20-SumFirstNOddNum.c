/*Q. Write a C Program  to calculate the sum of first n odd numbers. 
(using while loop)
*/
#include<stdio.h>
void main()
{ int n,num=1,sum=0;
  printf("\nEnter n:");
  scanf("%d",&n);
  while(num<2*n)
  {
    sum+=num;
    num = num + 2;
  }
  printf("The sum of first %d Odd numbers is %d",n,sum);    
}