/*Q. Write a program that will read C source code from the standard input and ensure
     that the braces are paired correctly.Note: You need not worry about braces that 
     appear within comments, string literals, or character constants.
*/
#include<stdio.h>
#include<stdlib.h>
int o_parentheses = 0,o_sqbrackets = 0, o_curlybrackets = 0;
void BracesCount(char ch)
{
    if(ch=='(') o_parentheses++;
    else if(ch==')')  
    {  
        if(o_parentheses!=0) o_parentheses--;
        else return;
    } 
    else if(ch=='[') o_sqbrackets++;
    else if(ch==']')  
    {  
        if(o_sqbrackets!=0) o_sqbrackets--;
        else return;
    } 
    else if(ch=='{') o_curlybrackets++;
    else if(ch=='}')  
    {  
        if(o_curlybrackets!=0) o_curlybrackets--;
        else return;
    } 
    else 
       return;
}
void main()
{   
    int i, j,line,len;
    printf("\nEnter number of lines : ");
    scanf("%d",&line);
    char **code = (char **)malloc((line) * sizeof(char *));
    for(i=0; i<line; i++)    
        code[i]=(char *)malloc(1000*sizeof(char));
    printf("\033[0;32m");printf("Code Here > Terminal.c > main()\n");printf("\033[0m"); 
    printf("%d |  #include <stdio.h>\n%d |  #include <stdlib.h>\n",1,2);
    for(i=0; i<line; i++)
    {
        fflush(stdin);
        printf("%d |  ",i+3);
        gets(code[i]);
    }
    for(i=0; i<line; i++)
    {
        for(j=0; code[i][j]!='\0'; j++)
        {
            if(code[i][j]=='/' && code[i][j+1]=='/')
                break;
            else if(code[i][j]=='\"')
            {
                j++;
                while(code[i][j]!='\"') j++;
            }
            else if(code[i][j]=='\'')
                j=j+3;      
            else 
                BracesCount(code[i][j]);    
        }
    }
    if(o_parentheses==0 && o_sqbrackets==0 && o_curlybrackets==0)
        printf("\n Your Code is Perfect");
    if(o_parentheses!=0)
        printf("\nUnbalanced use of '(' (parentheses) in your code");
    if(o_sqbrackets!=0)
        printf("\nUnbalanced use of '[' (Square Brackets) in your code");
    if(o_curlybrackets!=0)
        printf("\nUnbalanced use of '{' (Curly Brackets) in your code");           
    free(code);
}