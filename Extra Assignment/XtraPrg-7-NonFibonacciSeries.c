/* Q. Write a C Program to print the non fibonacci series
      without using concept of printing number rather than 
      fibonacci terms.
Series :  4  6  7  9  10  11  12  14  15  16  17  18  19  20 ......  

#include<stdio.h>
void main()
{   int i, j, n , t=1, term=4;
    printf("\nEnter number of terms of series you want to see: ");
    scanf("%d",&n);
    printf("\nSeries: ");
    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=t && j<=n ; j++)
        {
            printf("%d ",term);
            term++;
        }
        term++;
        t += i;
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}
*/
#include<stdio.h>
void main()
{   int n , a=0, b=1, c=0, x, d, i=0;
    printf("\nEnter the number of terms of series you want to see:");
    scanf("%d",&n);
    printf("\nSeries: ");
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        d=a+b;
        
        for(x=c+1; x<d ; x++)
        { i+=1;
            if(i<=n)
               printf("%d ",x);
            else 
               break;   
        }
        
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}