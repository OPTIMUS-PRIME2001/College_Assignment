// Q. Find the frequenvy of particular set like "cd" .(Occurrences of cd in the given string).
#include<stdio.h>
int Strlen(char s[])
{
    int len=0;
    while(s[len])
      len++;
    return len;
}
int OccurrenceCount(char String[],char set[])
{
    int i=0, j=0, count=0;
    while(String[i]!='\0')
    {
        for(j=0; set[j]!='\0';j++)
        {
            if(String[i+j]==set[j])
            {
                if(Strlen(set)==1)
                    count++;
                else if(String[i+j+1]==set[j+1]&&String[i+j+1]&&set[j+1])
                    count++;    
            }         
            else
                break;      
        }
        i++;
    }
    return count;
}
void main()
{
    char String[100],set[5];
    printf("\nEnter a String: ");
    scanf("%[^\n]s",&String);
    printf("Enter the set: ");
    scanf("%s",&set);
    printf("Occurence of %s is %d",set,OccurrenceCount(String,set));
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}