/*Q. Write a C Program to implement Jump Search
     Time Complexity : √n
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int ARR[100], ITEM, N, index=-1, jump, prev=0;
    printf("\nEnter desired Array size(max 100):");
    scanf("%d",&N);
    printf("Enter Array Elements:");
    for(int i=0; i<N; i++)
    {
        scanf("%d",&ARR[i]);
    }
    printf("\nEnter Element to be Searched for.....");
    scanf("%d",&ITEM);
    jump = sqrt(N);
    // Finding the block where ITEM is present 
    while(ARR[jump] <= ITEM && jump < N) 
    {
      prev = jump; 
      jump += sqrt(N);
      if(jump > N - 1)
         jump = N; //if right exceeds then bound the range
   }

   for(int i = prev; i<jump; i++) 
   { 
      //perform linear search in selected block
      if(ARR[i] == ITEM)
         index = i; //the correct position of the ITEM in Array
   }
    if(index == -1)
    {
        printf("\nSorry!! Given Element could not be found");
    }  
    else
    {
        printf("\nElement fount at index: %d , Position: %d",index,index+1);
    }          
}