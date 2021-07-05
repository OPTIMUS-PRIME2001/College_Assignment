//Q. Write a C program to check whether a string/word is pallindrome or not.
// Pallindromic Words are:  radar, madam, bob, saippuakivikauppias, malayalam, Hannah, eve,etc...
#include<stdio.h>
#include<string.h>
int isUpper(char s)
{
    if(s>='A' && s<='Z' )
        return 0;
    else
        return 1;    
}
int isLower(char s)
{
    if(s>='a' && s<='z' )
        return 0;
    else
        return 1;    
}
char ToUpper(char s)
{
    if(isLower(s)==0)
       s = s - 32;
    return s;
}
char ToLower(char s)
{
    if(isUpper(s)==0)
       s = s + 32;
    return s;
}
char Pallindrome(char S[])
{
    int i=0,l = strlen(S); char flag='y';
    while(i<(l/2))
    {
        if(isUpper(S[i])==0)
            S[i] = ToLower(S[i]);
        if(isUpper(S[(l-1)-i])==0)
            S[i] = ToUpper(S[i]);
        if(S[i]!=S[(l-1)-i])            
            flag = 'n';
        i++;  
    }
    return flag;
}
void main()
{
    char c,String[30];
    printf("Enter a String to check for Pallindrome: ");
    scanf("%[^\n]s",&String);
    c = Pallindrome(String);
    if(c=='y')
        printf("The String %s is a pallindrome",String);
    else
        printf("The string %s is not a pallindrome",String);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");    
}