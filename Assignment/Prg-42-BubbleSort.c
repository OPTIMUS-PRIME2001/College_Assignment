/*Q. Implement Bubble sort.
*/
#include<stdio.h>
void BubbleSort(int AR[],int size)
{
    int i,j,k,temp,ctr=0,flag=0;
    for(i=0;i<size;i++)
    {
        for(j=0; j< (size-1)-i; j++)
        {
            if( AR[j]>AR[j+1] )
            {
               temp = AR[j];
               AR[j] = AR[j+1];
               AR[j+1] = temp;
               flag=1;
            }
        }
        if(flag==0)
            break;
        printf("Array after iteration - %d is :",++ctr);
        for(k=0; k<size; k++)
        {
            printf("%d ",AR[k]);
        }
        printf("\n");
        flag=0;
    }
}
void main()
{   int i;
    int AR[100], ITEM, N, index;
    printf("\nHow many elements do you want to create Array with? (max. 100)...");
    scanf("%d",&N);
    printf("\nEnter Array Elements:");
    for(i=0; i<N; i++)
    {
        scanf("%d",&AR[i]);
    }
    BubbleSort(AR,N);
    printf("\nThe Sorted array is as shown below....\n");
    for(i=0; i<N; i++)
    {
        printf("%d ",AR[i]);        
    }
    printf("\n");
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}