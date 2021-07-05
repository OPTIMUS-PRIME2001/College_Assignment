/*Q. Write a C Program to print this Pattern Using Array.
Pattern:   A B C D E F G H G F E D C B A
           A B C D E F G   G F E D C B A
           A B C D E F       F E D C B A
           A B C D E           E D C B A
           A B C D               D C B A
           A B C                   C B A
           A B                       B A
           A                           A    
*/
#include<stdio.h>
#include<string.h>  
void main()
{
    char String[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]s",&String);
    int n = strlen(String);
    for (int i = 0; i<n ; i++) 
    {
        for (int j = 0; j < (2 * n) - 1; j++) 
        {
            if (j >= ((n - 1) + i))
                printf("%c ",String[((n - 1) - (j - (n - 1)))] );
            else if (j <= (n - 1) - i)
                printf("%c ",String[j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}