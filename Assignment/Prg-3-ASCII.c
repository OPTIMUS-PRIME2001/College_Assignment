//Q. Write a C Program to read a character and print its ASCII value.
#include<stdio.h>
#include<stdlib.h>

int main()
{   /*
    char ch;
    printf("\nEnter a Character:"); scanf("%c", &ch);
    printf("ASCII Value of %c is %d",ch,ch);
    */
    int i; char ch;
    printf("\nEnter a Character:"); scanf("%c", &ch);
    i=ch;
    printf("ASCII Value of %c is %d",ch,i);
    return 0;
}