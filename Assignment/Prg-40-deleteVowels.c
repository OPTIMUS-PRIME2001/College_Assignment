/*Q. Write a C Program to delete all vowels from a sentence
*/
#include<stdio.h>
#include<string.h>
int DelVowels(char Ch)
{
    if(Ch=='a' || Ch=='e' || Ch=='i' || Ch=='o' || Ch=='u')
    { 
        return 1; 
    }
    else if(Ch=='A' || Ch=='E' || Ch=='I' || Ch=='O' || Ch=='U')
    { 
        return 1; 
    }
    else
    {
        return 0;
    }           
}
void main()
{   int j=0,i;
    char Str[100], NewStr[100]; 
    printf("\n\nEnter a String:");
    gets(Str);
    for(i=0; Str[i]!='\0' ; i++)
    {
        if(DelVowels(Str[i])==0)
        {
            NewStr[j]=Str[i];
            j++;
        }  
    }
    NewStr[j] = '\0';
    printf("The String without vowels is :%s",NewStr);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}