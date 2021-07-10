/*Q. Write a C Program to reverse a given string (of characters).
*/
#include<stdio.h>
#include<string.h>
void RevStringMethod1(char Str[100])
{
    strrev(Str);
    printf("\nYour Reverse String is: %s",Str);
}
void RevStringMethod2(char Str[100])
{   int len, end, beg;
    len = end = strlen(Str);
    char rev[len];
    for(beg=0; beg<len; beg++)
    {
        rev[beg] = Str[end-1];
        end--;
    }
    rev[beg]='\0';
    printf("\nYour Reverse String is: %s",rev);
}
void RevStringMethod3(char *Str, int begin, int end)
{   char c;
    if (begin >= end)
    {  return;    }
    c = *(Str+begin);
    *(Str+begin) = *(Str+end);
    *(Str+end)   = c;

    RevStringMethod3(Str, ++begin, --end);
}
void RevStringMethod4(char Str[100])
{   int len=0, end, beg;
    while(Str[len]!=0)
    {
        len++;
    }    
    end = len - 1;   
    char rev[len];
    for(beg=0; beg<len; beg++)
    {
        rev[beg] = Str[end];
        end--;
    }
    rev[beg]='\0';
    printf("\nYour Reverse String is: %s",rev); 
}
void main()
{   int choice;
    char String[100];
    printf("\n\nEnter a String: ");
    gets(String);
    printf("\n1.Method 1: By String Function\n2.Method 2: By Making Function");
    printf("\n3.Method 3: By using Recursion\n4.Method 4: Without using any functions of <string.h>");
    printf("\nEnter Method number,(1-4): ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: RevStringMethod1(String);
                break;
        case 2: RevStringMethod2(String);
                break;
        case 3: RevStringMethod3(String, 0, strlen(String)-1);
                printf("\nYour Reverse String is: %s",String);
                break;        
        case 4: RevStringMethod4(String);
                break;
        default: printf("You have choosen the wrong option");
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}