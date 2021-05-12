/*Q. Write a C Program to determine whether the character entered is a 
capital, small case letter, a digit or a special symbol. 
(using else if ladder)
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{  char ch;
   printf("\n\nEnter a character:");
   scanf("%c", &ch);
   if(isalnum(ch))
   {
       if(isalpha(ch))
       { 
          if(isupper(ch))
          { 
              printf("%c is a Uppercase Alphabet",ch);
          }
          else
          {
              printf("%c is a Lowercase Alphabet",ch);
          }
       }
       else
       {
           printf("%c is a Digit",ch);
       }
   }
   else
   {
      printf("%c is a Special Character",ch);
   }
   return 0;
}