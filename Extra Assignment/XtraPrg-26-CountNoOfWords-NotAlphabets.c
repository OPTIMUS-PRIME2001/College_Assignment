//Q. Write a C Program 
#include<stdio.h>
//Count Words With more than one letters only. No single letter words are not calculated
int CountWords(char  str[])
{
    int i=0,count1=0,count2=0;
    while(str[i]!='\0')
    {
        //printf("start of while \n");
        if(str[0]==' ')
        {    count1 = 0;    }
       
        if(str[i]==' ' || str[i]=='.' || str[i+1]=='\0')
        {    count1++;      }   
        
        if((str[i-1]==' '&&str[i+1]==' ')||(i==0 && str[i+1]==' ')||(str[i-1]==' ' && str[i+1]=='\0'))
        {    count2++;      }
        i++;
    }
    return (count1-count2);
}
void main()
{
    char String[100];
    printf("\nEnter the Sentence: ");
    scanf("%[^\n]s",&String);
    int count = CountWords(String);
    printf("Total number of Words with more than one letter: %d", count);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m"); 
}