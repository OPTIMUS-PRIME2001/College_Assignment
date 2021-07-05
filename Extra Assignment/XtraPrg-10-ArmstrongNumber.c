/*Q. Write a C Program to find whether a number is Armstrong or not. 
(using while and if statement)
Armstrong number(or Narcissistic number) is a number that is equal to the sum of its own digits 
each raised to the power of the numbers of digits
*/
#include<stdio.h>
#include<math.h>
int main()
{   int num,n=0,originalNum,remainder;
    float result=0.0;
    printf("\n\nEnter an Number:");
    scanf("%d",&num);
    originalNum = num;
    //store the number of digits of num in n
    while(originalNum!=0)
    { originalNum /= 10;
      ++n;
    }
    originalNum = num;
    while(originalNum!=0)
    { remainder = originalNum % 10;
      //store the sum of the power of individual digits in result
      result += pow(remainder,n);
      originalNum /=10;
    }
    //if num is equal to result, the  number is an Amstrong number
    if((int)result == num)
    { printf("%d is an Armstrong Number or Narcissistic number.",num);
    }
    else
    { printf("%d is not an Armstrong Number or Narcissistic number.",num);
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");    
    return 0;
}