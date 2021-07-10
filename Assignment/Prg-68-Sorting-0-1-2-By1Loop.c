/*Q. Given an array A[] consisting 0’s, 1’s and 2’s, give an algorithm for sorting A[].
     The algorithm should put all 0’s first, then all 1’s and all 2’s in the last.
     (using single for or while loop(O(n)))
     Input={0,1,1,0,1,2,1,2,0,0,0,1}         Output={0,0,0,0,1,1,1,1,1,2,2} 
*/
#include<stdio.h>
// Function for Sorting the array using a single loop
int *sortArrays(int arr[], int length)
{
    // Sorting using a single loop
    for (int j = 0; j < length - 1; j++) 
    {
        // Checking the condition for two simultaneous elements of the array
        if (arr[j] > arr[j + 1]) 
        {
            // Swapping the elements.
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
              
            /* updating the value of j = -1 so after getting updated for j++
               in the loop it becomes 0 and the loop begins from the start.
            */   
            j = -1;
        }
    }
    return arr;
}
void main()
{
    // Declaring an integer array of size 11.
    int ARR[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int length = sizeof(ARR)/sizeof(ARR[0]);              
    
    // Printing the original Array.   
    printf("\nOriginal Array: [");
    for(int i=0; i<length; i++)
    {
        printf(" %d, ",ARR[i]);
    }
    printf("]");    
      
    // Sorting the array using a single loop
    int *arr;
    arr = sortArrays(ARR, length);
    int str[length];
    
    // Printing the sorted array.
    printf("\nSorted Array: [");
    for(int i=0; i<length; i++)
    {  str[i] = *arr;
       printf(" %d,",str[i]);
       arr++;
    }
    printf("]\n");
}  