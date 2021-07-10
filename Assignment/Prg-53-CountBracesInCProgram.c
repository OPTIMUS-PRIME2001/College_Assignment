/*Q. Write a program that will read C source code from the standard input and ensure
     that the braces are paired correctly.Note: You need not worry about braces that 
     appear within comments, string literals, or character constants.
*/
#include<stdio.h>
int , count_clo;
void BracesCount(char ch)
{
    
}
void main()
{   
    char code[1000][1000];
    int i, j,n,len;
    printf("\nEnter number of String : ");
    scanf("%d",&n);
    printf("\n"); 
    for(i=0; i<n; i++)
    {
        printf("%d :  ",i+1);
        code[i]=(char *)malloc(20*sizeof(char));
        scanf("%s",code[i]);
        len = sizeof(code[i])/sizeof(char);
        for(j=0; j<len; j++)
        {
            BracesCount(code[i][j]);
        }
    }
}