//Q. Write a C Program to read a character and print its ASCII value.
#include<stdio.h>
#include<stdlib.h>
/*
int main()
{   /*
    char ch;
    printf("\nEnter a Character:"); scanf("%c", &ch);
    printf("ASCII Value of %c is %d",ch,ch);
    
    int i; char ch;
    printf("\nEnter a Character:"); scanf("%c", &ch);
    i=ch;
    printf("ASCII Value of %c is %d",ch,i);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
    return 0;
}*/
void main()
{
    char c;int i;
    for(i=0; i<255; i++)
    {   
        c=i;
        printf("%d = %c\n",c,c);
    }
}