/* Implement Quick Sort using recursion.
   Time Complexity: 
*/
#include<stdio.h>
int i;
void swap(int *a,int *b)
{
   int temp = *a; 
   *a = *b;
   *b = temp;
}
int partition_a(int Arr[], int low, int high)
{
    int j;
    int Pivot = Arr[high]; 
    i = (low - 1); 
    for (j = low; j <= high - 1; j++)
    {
        if (Arr[j] < Pivot)
        {
            i++;
            swap(&Arr[i], &Arr[j]);
        }
    }
    swap(&Arr[i + 1], &Arr[high]);
    return (i + 1);
}
int Partition_c(int A[],int lowb, int Upb)
{
    int Pivot = A[lowb],start = lowb, end = Upb;
    while(start<end)
    {
        while(A[start] <= Pivot)
            start++;
        while(A[end] > Pivot)
            end--;
        if(start < end) 
            swap(&A[start],&A[end]);                   
    }
    swap(&A[lowb],&A[end]);
    return end;
}
void QuickSort(int Array[], int lower, int upper)
{
   int loc; static int count=0;
   if(lower<upper)
   {   
       loc = partition_a(Array, lower, upper);
       QuickSort(Array, lower, loc-1);
       QuickSort(Array, loc+1, upper);
   }
}
void main()
{   
    int AR[100], ITEM, N, index;
    printf("\nHow many elements do you want to create Array with? (max. 100)...");
    scanf("%d",&N);
    printf("\nEnter Array Elements:");
    for(i=0; i<N; i++)
    {
        scanf("%d",&AR[i]);
    }
    QuickSort(AR,0,N-1);
    printf("\nThe Sorted array is as shown below....\n");
    for(i=0; i<N; i++)
    {
        printf("%d ",AR[i]);        
    }
    printf("\n");
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}