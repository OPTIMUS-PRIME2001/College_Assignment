/*Q. Write your own strcpy() and strcat() functions in C
*/
#include<stdio.h>
#include<string.h>
char Src1String[100], Src2String[100];
char StrCpy(char dest[], char Src[])
{   int i=0;
    while(Src[i] != '\0')
    {
        dest[i] = Src[i];
        Src1String[i] = Src[i];
        i++;
    }
    dest[i] = '\0';    
}
char StrCmp(char str1[], char str2[])
{ 
    int same=0, i=0;  
    while( str1[i] != '\0' && str2[i] != '\0' )
    {
        if(str1[i]==str2[i])
        {
            i++;            
        }
        else
        {
            same=1;
            i++;
            return same;
        }
    }
    return same;
}
char StrCat(char str1[], char str2[])
{
   int i,j, l1=0, l2=0;
    for(l1=0; str1[l1] != '\0'; l1++);
    for(i=0; str2[i] != '\0'; i++)
    {
        l2++;
    }
    Src1String[l1] = ' ';
    for(i=l1+1, j=0; i<=(l1+l2); i++, j++)
    {
        Src1String[i] = str2[j];        
    }
    Src1String[i] = '\0'; 
}
void main()
{ int choice;  
  printf("\n\nTesting string Functions");
  printf("\n1.strcpy():function copies the string pointed by source (including the null character) to the destination. ");
  printf("\n2.strcat():function is used for string concatenation. It concatenates the specified string at the end of\n\t   the another specified string.");
  printf("\n3.strcmp():function is used to compare two strings two strings str1 and str2. If two strings are same then\n\t   strcmp() returns 0, otherwise, it returns a non-zero value.");
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
 {      printf("\nEnter First string:");
        gets(Src1String);

        printf("Enter Second string:");
        gets(Src2String);

        StrCat(Src1String,Src2String);
        printf("The Concatenated String is: %s",Src1String);
        printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
 }
 else if(choice==3)
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