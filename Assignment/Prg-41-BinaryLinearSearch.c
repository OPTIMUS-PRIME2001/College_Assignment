/*Q. Write a C Program to Implement Binary Search and Linear Search
*/
#include<stdio.h>
int LSearch(int AR[],int size,int item)
{
  for(int i=0; i<size; i++)
  {
      if(AR[i] == item)
      {
          return i;
      }
  }
  return -1;
}
int BSearch(int AR[], int size, int item)
{
    int beg, mid, last;
    beg=0; last=size-1;
    while(beg<=last)
    {
        mid = (beg+last)/2;
        if(AR[mid]==item)
        {
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
    return -1;
}
void main()
{   int choice;
    int AR[100], ITEM, N, index;
    printf("\n\n1.LINEAR SEARCH\n2.BINARY SEARCH");
    printf("\nEnter a choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:{  printf("\nEnter desired Array size(max 100)");
                  scanf("%d",&N);
                  printf("Enter Array Elements:");
                  for(int i=0; i<N; i++)
                  {
                      scanf("%d",&AR[i]);
                  }
                  printf("\nEnter Element to be Searched for.....");
                  scanf("%d",&ITEM);
                  index = LSearch(AR,N,ITEM);
                  if(index == -1)
                  {
                      printf("\nSorry!! Given Element could not be found");
                  }
                  else
                  {
                      printf("\nElement fount at index: %d , Position: %d",index,index+1);
                  }
                  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
               }
                break;
        case 2:{  printf("Enter desired Array size(max 100)");
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
                      printf("\nSorry!! Given Element could not be found");
                  }
                  else
                  {
                      printf("\nElement fount at index: %d , Position: %d",index,index+1);
                  }
                  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
               }
               break;
        default: printf("You have choosen a wrong option");       
    }
}