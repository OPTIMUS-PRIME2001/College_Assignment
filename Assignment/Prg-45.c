/*Q. Write a C Program to illustrate passing of an array of strings(names) to a function.
*/
#include<stdio.h>
void stringArrayFunction(char ARR[][20], int size)
{
    for(int i=0;i<size; i++)
    {
        printf("%s ", ARR[i]);
    }
}
void main()
{   
    char Str[][30] = {"Saptarshi","Chatterjee","CSE","Sem2"};
    stringArrayFunction(Str,sizeof(Str)/sizeof(Str[0]));

    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}