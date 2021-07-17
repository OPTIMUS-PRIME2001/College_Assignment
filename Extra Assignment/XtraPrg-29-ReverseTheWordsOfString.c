/*Q. Write a C program to reverse the Word Of a String  
    Input:  I have many books
    Output: books many have I
*/
#include<stdio.h>
#include<string.h>
void ReverseWordsInString(char Str[])
{
    int l=strlen(Str);
    int i =l-1,j, initial=l, final; 
    while(i>=0)
    {
        if(Str[i]==' ')
        {   final=i;   break;   }
        i--;
    }
    for(i=l-1; i>=0; i--)
    {
        if(Str[i]==' ' && i>0)
            final=i; 
        else if(Str[i]!=' ' && i==0)
            final=0;

        if(final!=initial)  
        {
            for(j=final; j<=initial; j++)
            {
                printf("%c",Str[j]);
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
    ReverseWordsInString(String);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m"); 
}