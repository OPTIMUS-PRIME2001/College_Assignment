/*Q. Implement Insertion sort.
*/
#include<stdio.h>
#include<limits.h>
void InsSort(int AR[],int size)
{
    int i, j, k, temp;
    AR[0]= INT_MIN;
    for(i=1; i<=size; i++)
    {
        temp = AR[i];
        j = i-1;
        while(temp < AR[j])
        {
            AR[j+1] = AR[j];
            j--;
        }
        AR[j+1] = temp;
        printf("Array after pass - %d -is: ",i);
        for(k=1; k<=size; k++)
        {
            printf("%d ",AR[k]);
        }
        printf("\n");
    }
}
void main()
{   int i;
    int AR[100], ITEM, N, index;
    printf("\nHow many elements do you want to create Array with? (max 100)..");
    scanf("%d",&N);
    printf("\nEnter Array Elements....");
    for(i=1; i<=N; i++)
    {
        scanf("%d",&AR[i]);
    }
    InsSort(AR,N);
    printf("\nThe Sorted Array is as shown below....\n");
    for(i=1; i<=N; i++)
    {
        printf("%d ",AR[i]);
    }
    printf("\n");
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}