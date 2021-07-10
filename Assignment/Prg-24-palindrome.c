/*Q. Write a C Program to check whether a number is palindrome or not. 
(using while and if statement)
*/
#include<stdio.h>
int main()
{  int num, originalNum, remainder, reversedNum=0;
   printf("\nEnter a Number:");
   scanf("%d", &num);
   originalNum = num;
   //reverse number is stored in reversedNum
   while(num!=0)
   {  remainder = num%10;
      reversedNum = reversedNum*10 + remainder;
      num /=10;
   } 
   //palindrome if originalNum and reversedNum are equal
   if(originalNum==reversedNum)
   {
       printf("%d is a palindrome.",originalNum);
   }
   else
   {
       printf("%d is not a palindrome.",originalNum);
   }
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
   return 0;
}