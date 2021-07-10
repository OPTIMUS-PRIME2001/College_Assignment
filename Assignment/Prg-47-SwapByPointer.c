/*Q. Write a C function to swap two numbers using pointers.
*/
#include<stdio.h>
void swap(int *x ,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{  int a,b;
   printf("\n\nEnter a:"); scanf("%d", &a);
   printf("Enter b:"); scanf("%d", &b);
   printf("Before swapping two numbers \n a:%d\n b:%d\n",a,b);
   swap(&a,&b);
   printf("After Swapping two numbers\n a:%d\n b:%d",a,b);
   
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
   return 0;
}   