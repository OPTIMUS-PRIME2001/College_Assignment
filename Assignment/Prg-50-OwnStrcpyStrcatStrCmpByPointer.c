/*Q. Write your own strcpy() and strcat() functions in C
*/
#include<stdio.h>
#include<string.h>
char *StrCpy(char *dest, char *Src)
{  
    char *start = dest;
    while(*Src != '\0')
    {
        *dest = *Src;
        dest++;
        Src++;
    }
    *dest = '\0';
    return start;
}
unsigned int StrLen(char *str1)
{  
    int len=0;
    while(*str1 != '\0')
    {
        len++; 
        str1++;
    }
    return len;
}
char *StrCat(char *str1, char *str2)
{
    char *start = str1;
    while(*str1 != '\0')
    {
        str1++;
    }

    while(*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
    return start; 
}
char StrCmp(char *str1, char *str2)
{
    while( ( *str1 != '\0' && *str2 != '\0' ) && *str1 == *str2 )
    {
        str1++;
        str2++;
    }

    if(*str1 == *str2)
    {
        return 0; // strings are identical
    }
    else
    {
        return *str1 - *str2;
    }
}
void main()
{ int choice;
  char Src1String[100], Src2String[100];
  printf("\n\nTesting string Functions");
  printf("\n1.strcpy():function copies the string pointed by source (including the null character) to the destination. ");
  printf("\n2.strlen()");
  printf("\n3.strcat():function is used for string concatenation. It concatenates the specified string at the end of\n\t   the another specified string.");
  printf("\n4.strcmp():function is used to compare two strings two strings str1 and str2. If two strings are same then\n\t   strcmp() returns 0, otherwise, it returns a non-zero value.");
  printf("\nEnter a choice:");
  scanf("%d",&choice);
  fflush(stdin);
  if(choice==1)
   {   
        printf("\nEnter First string:");
        gets(Src1String);

        /*printf("Enter Second string:");
        gets(Src2String);*/

        printf("\nString 1: %s",Src1String);
        printf("\nString 1 is copied to String 2.\n");
        StrCpy(Src2String,Src1String);
        printf("String 2: %s",Src2String);
        printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
  }
  else if(choice==2)
  {
        printf("\nEnter A String:");
        gets(Src1String);
        printf("\n Length of the String is : %u", StrLen(Src1String));
        printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
  }
  else if(choice==3)          
  {      printf("\nEnter First string:");
        gets(Src1String);

        printf("Enter Second string:");
        gets(Src2String);
        StrCat(Src1String,Src2String);
        printf("The Concatenated String is: %s",Src1String);
        printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
 }
 else if(choice==4)
 {      printf("\nEnter First string:");
        gets(Src1String);

        printf("Enter Second string:");
        gets(Src2String);
        if(StrCmp(Src1String,Src2String)==0)
        {
           printf("Both the strings are similar");
        }   
        else
       {
          printf("Both the string are not similar");
        }
        printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
  }
  else
   { printf("You have choosen the wrong option");}  
}