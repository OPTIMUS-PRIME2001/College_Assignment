//Q. Write a C Programming to print a message on the screen.
#include<stdio.h>
#include<stdlib.h>
int main()
{
   printf("\n\nHello World");
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
   return 0;
}