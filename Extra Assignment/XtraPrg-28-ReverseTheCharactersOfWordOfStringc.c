/*Q. Write a C Program To Reverse the Characters Of Each Word in a String/Sentence
     Input: I love to read books
     Output: I evol ot daer skoob
*/
#include<stdio.h>
void ReverseEachWords(char Str[])
{
    int i, j, initial, final, diff; char temp;
    if(Str[0]==' ') initial =0;
    else initial =-1;
    i=1;
    while(Str[i])
    {
        if(Str[i]==' ')
        {   final =i;   break;  }
        i++;
    }
    for(i=0; Str[i]!='\0'; i++)
    {
        if(Str[i]==' ' && i!=1) 
            final =i;
        if(Str[i+1]=='\0')
            final = i+1;
        if(final!=initial && i!=0)
        {
            diff = final - (initial + 1);   
            for(j=0; j<diff/2; j++)
            { 
                temp = Str[(final-1)-j];
                Str[(final-1)-j]=Str[initial+1 + j];
                Str[initial+1 + j]=temp;
            }
            initial = final;          
        }
    }
}
void main()
{
    char String[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]s",&String);
    ReverseEachWords(String);
    printf("\nThe Output is: %s",String);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");  
}      