/*Q. Write a C Program to implement Interplation Search
    Array elements must be sorted and uniformly distributed
    *Binary Search always goes to the middle element to check. On the other hand, 
    interpolation search may go to different locations according to the value of 
    the key being searched. For example, if the value of the key is closer to the 
    last element, interpolation search is likely to start search toward the end side.
    Time Complexity may vary from O(n) to O(logn)
*/
#include<stdio.h>

int interpolationSearch(int arr[], int n, int key)
{
    // Find indexes of two corners
    int low = 0, high = (n - 1), pos, step=0;
 
    // Since array is sorted, an element present
    // in array must be in range defined by corner
    while ( (arr[high] != arr[low]) && (low <= high) && ( arr[low]<=key ) && ( key <= arr[high] ))
    {  
        step++;
        if (low == high)
        {   printf("\nNumber Of Steps: %d",step);
            if (arr[low] == key) 
                return low;
            return -1;
        }
        // Probing the position with keeping uniform distribution in mind.
        pos = low + ( ((double)(high - low) * (key - arr[low])) / (arr[high] - arr[low]) );
 
        // Condition of target found
        if (arr[pos] == key)
        { 
            printf("\nNumber Of Steps: %d",step);
            return pos;
        } 
        // If x is larger, x is in upper part
        else if (arr[pos] < key)
        {
            low = pos + 1;
        }
        // If x is smaller, x is in the lower part
        else
        {
            high = pos - 1;
        }    
    }
    printf("\nNumber Of Steps: %d",step);
    return -1;
}
 
// Driver Code
void main()
{
    // Array of items on which search will be conducted.
    int ARR[100] ;//= {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};
    int size ;//= sizeof(ARR)/sizeof(ARR[0]);
    printf("\nEnter desired Array size(max 100):");
    scanf("%d",&size);
    printf("Enter Array Elements(must be sorted in Asc order):");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&ARR[i]);
    }
    printf("\nOriginal List: [");
    for(int i=0; i<size; i++)
    {
        printf(" %d, ",ARR[i]);
    }
    printf("]");
    int ele ; // Element to be searched
    printf("\nEnter Element to be Searched for.....");
    scanf("%d",&ele);

    //function call return index of the searched element if present 
    int index = interpolationSearch(ARR, size, ele);
 
    // If element was found
    if (index != -1)
        printf("\nElement found at index: %d, position: %d", index,index+1);
    else
        printf("\nSorry! Searched Element not found.");
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");    
}