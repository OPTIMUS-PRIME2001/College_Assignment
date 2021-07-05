/*Q. Write a C Program to implement Binary Search.
     Time Complexity of O(logn)
*/
#include<stdio.h>
int BSearch(int AR[], int size, int item)
{
    int beg, mid, last, step=0;
    beg=0; last=size-1;
    while(beg<=last)
    {
        step++;
        mid = (beg+last)/2;
        if(AR[mid]==item)
        {
            printf("Number Of Steps: %d",step);
            return mid;
        }
        else if( AR[mid] < item )
        {
            beg=mid+1;
        }
        else
        {
            last=mid-1;
        }     
    }
    printf("Number Of Steps: %d",step);
    return -1;
}
void main()
{
    int AR[100], ITEM, N, index=-1;
    printf("\nEnter desired Array size(max 100):");
    scanf("%d",&N);
    printf("Enter Array Elements(must be sorted in Asc order):");
    for(int i=0; i<N; i++)
    {
        scanf("%d",&AR[i]);
    }
    printf("\nEnter Element to be Searched for.....");
    scanf("%d",&ITEM);
    index = BSearch(AR,N,ITEM);
    if(index == -1)
    {
        printf("\nSorry!! Searched Element not found");
    }
    else
    {   if(AR[index-1]==ITEM)
        {  
            printf("\nElement fount at index: %d , Position: %d",index-1,index);
        }
        printf("\nElement fount at index: %d , Position: %d",index,index+1);
        if(AR[index+1]==ITEM) 
        {
            printf("\nElement fount at index: %d , Position: %d",index+1,index+2);
        }          
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m"); 
}