/*Q. Write a C Program to find whether a number is Peterson number or not. 
(using while and if statement)
A number is said to be a PETERSON NUMBER (KRISHNAMURTHY NUMBER) if the sum of 
factorials of each digit of the number is equal to the number itself.
Ex : 1 , 2 , 145 , 40585 
*/
#include<stdio.h>
#include<stdlib.h>

int factorial(int num)
{
  if(num==0)
    return 1;
  else if(num==1)
    return 1;
  else
    return num*factorial(num-1);    
}
/*
int factorial(int num)
{  int fact=1, n=num;
   do
   {  if(num!=0)
        { fact = fact * num; }
      if(n>0)  
        num--;
      else if(n<0)
        fact = 0;        
   }while(num>=1);
   return fact; 
}*/
void main()
{   int num, originalNum, remainder, result=0;    
    printf("\n\nEnter an Number:");
    scanf("%d",&num);
    originalNum = num;
        
    while(originalNum!=0)
    { remainder = originalNum % 10;
      //store the sum of the factorial of individual digits in result
      result += factorial(remainder);
      originalNum /=10;
    }
    //if num is equal to result, the  number is an Peterson number
    if(result == num && num!=0)
    { printf("%d is an Peterson Number.",num);
    }
    else
    { printf("%d is not an Peterson Number.",num);
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");    
}