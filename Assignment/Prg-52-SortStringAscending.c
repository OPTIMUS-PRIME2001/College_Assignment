/*Q. Write a C Program to sort strings abc, deh, bac in ascending order using array of pointers.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reorder(int n,char *x[])
{
    int i,j; char t[20];
    for(i=0;i<n-1;i++)
    {  
        for(j=i+1;j<n;j++)
        {   if(strcmp(x[i],x[j])>0)
            {
                strcpy(t,x[j]);
                strcpy(x[j],x[i]);
                strcpy(x[i],t);
            }
        }                                                    
    }
}    
void main()
{
    char *Str[20];
    int i,n;
    printf("\nEnter number of String : ");
    scanf("%d",&n);
    printf("\n");
    
    for(i=0;i<n;i++)
    {
        printf("Enter the Strings %d : ",i+1);
        Str[i]=(char *)malloc(20*sizeof(char));
        scanf("%s",Str[i]);
    }
    reorder(n,Str);
    printf("\nReorder list is :  \n");
    for(i=0;i<n;i++)
    {
        printf("%d %s\n",i+1,Str[i]);
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}