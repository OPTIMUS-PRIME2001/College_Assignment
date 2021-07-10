/*Q. Write a C Program using pointers to read in an array of integers and print its elements in 
     reverse order
     Example if Input is     2  23  5  56  78  92  11  103  9
                Output is    9  103  11  92  78  56  5  23  2  
*/ 
#include<stdio.h>
void main()
{   int *ptr;
    int i, n, INTARR[50];
    printf("\n How many integer elements you want to enter (max. 50) :");
    scanf("%d", &n);
    printf("\nEnter the Elements of integer Array");
    for(i=0; i<n; i++)
    {
        printf("\nElement %d: ",i+1);
        scanf("%d",&INTARR[i]);
    }
    ptr = &INTARR[n-1];
    printf("\nInteger Array Elements in Reverse Order: ");
    for(i=0; i<n; i++)
    {
        printf("%d  ",*ptr);
        ptr--;
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n", 251);printf("\033[0m");
}    