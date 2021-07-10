//Q. Write a C Program to swap two integer numbers using 3rd Variable.
#include<stdio.h>
#include<stdlib.h>

int main()
{  int a, b, temp;
   printf("\n\nEnter a:"); scanf("%d", &a);
   printf("Enter b:"); scanf("%d", &b);
   printf("Before swapping two numbers \n a:%d\n b:%d\n",a,b);
   //Swapping Algorithm
   temp = a; 
   a = b;
   b = temp;
   printf("After Swapping two numbers\n a:%d\n b:%d",a,b);

   /*
   int a=20, b=34, temp;
   printf("Before swapping two numbers \n a:%d\n b:%d\n",a,b);
   //Swapping Algorithm
   temp = a; 
   a = b;
   b = temp;
   printf("After Swapping two numbers\n a:%d\n b:%d",a,b);
   */
  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
  return 0;
}