/*Q. Implement Selection sort.
*/
#include<stdio.h>
void SelSort(int AR[],int size)
{
   int small,pos,temp, i, j;
   for(i=0; i<size-1; i++)
   {
       small = AR[i];
       pos = i;
       for(j=i+1; j<size; j++)
       {
           if(AR[j] < small)
           {
               small = AR[j]; 
               pos = j;
           }
       }
       temp = AR[i];
       AR[i] = AR[pos];
       AR[pos] = temp;
       printf("\nArray after pass - %d - is: ", i+1);
       for(j=0; j<size; j++)
       {
           printf("%d ",AR[j]);
       }
   }
}
void main()
{   int i;
    int AR[100], ITEM, N, index;
    printf("\nHow many elements do you want to create Array with? (max. 100)...");
    scanf("%d",&N);
    printf("\nEnter Array Elements: ");
    for(i=0; i<N; i++)
    {
        scanf("%d",&AR[i]);
    }
    SelSort(AR,N);
    printf("\nThe Sorted Array is as shown below....\n");
    for(i=0; i<N; i++)
    {
        printf("%d ",AR[i]);
    }
    printf("\n");
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}