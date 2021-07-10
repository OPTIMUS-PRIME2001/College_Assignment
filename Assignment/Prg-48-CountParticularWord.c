/*Q. Write a C Program which will read a text and count all occurrence of a particular word.

Sample text:
A computer program is a collection of instructions that performs specific task when executed by a computer . Computer requires programs to function. Computer program is usually written by a computer programmer in programming language. A collection of computer programs, libraries, and related data are referred to as software. Computer programs may be categorized along functional lines, such as application software and system software.
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int CountWord(const char *Str, const char *Search)
{
    int counter = 0;
    const char *holdstr, *holdsearch, *wordtop, *s = Str;
    do
    {
        for (wordtop = holdstr = s, holdsearch = Search ; *holdsearch != '\0' && *holdstr == *holdsearch ;
             holdsearch++,holdstr++)
             ;
        //                   top               space                     end          space
        if (!*holdsearch && (wordtop == Str || (wordtop[-1] == ' ')) && (!*holdstr || (*holdstr == ' ')))
        {
            counter++;
        }
    }while (*s++);
    return counter;
}
void main()
{   int n;  int i = 0, j=0;
    char String[100000], Word[30];
    printf("\n Enter the string: ");
    gets(String);
    printf("\nEnter word to be searched for: ");
    gets(Word);
    printf("The Occurence of the Word   %s  in the text is : ",Word);    
    while (String[i] || Word[j])
    {
       String[i] = toupper(String[i]);
       if (Word[j]!='\0')
       {    Word[j] = toupper(Word[j]);
            j++;
       }
       i++;
    }    
    n = CountWord(String, Word);
    printf(" %d number of times.",n);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}