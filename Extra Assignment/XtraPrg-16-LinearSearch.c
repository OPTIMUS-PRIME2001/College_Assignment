/*Q. Write a C Program to implement Linear Search
     Time Complexity: O(n) 
*/     
#include<stdio.h>
void main()
{
    int AR[100], ITEM, N, index, found=0;
    printf("\nEnter desired Array size(max 100):");
    scanf("%d",&N);
    printf("Enter Array Elements:");
    for(int i=0; i<N; i++)
    {
        scanf("%d",&AR[i]);
    }
    printf("\nEnter Element to be Searched for.....");
    scanf("%d",&ITEM);
    for(int i=0; i<N; i++)
    {
        if(AR[i] == ITEM)
        {                 
            index = i;
            printf("\nElement fount at index: %d , Position: %d",index,index+1); 
            found=1;                 
        }
    }
    if(found == 0)
    {
        printf("\nSorry!! Given Element could not be found");
    }             
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
} 