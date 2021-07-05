/*Q. Write a C Program which will remove all duplicate elements from a Array once encountered 
     previously and then arranged then after one by one in that Array again using O(n) time 
     complexity.
*/
/*
//program for duplicates elements occur side by side.
#include <stdio.h>
int Remove_Duplicates(int arr[], int n)
{
  if (n == 0 || n == 1)
    return n;

  int temp[n], j = 0, i;
  for (i = 0; i < n - 1; i++)
  { if (arr[i] != arr[i + 1])
      temp[j++] = arr[i];
  }    
  temp[j++] = arr[n - 1];

  for (i = 0; i < j; i++)
  {  
    arr[i] = temp[i];
  }

  return j;
}

void main()
{
  int size, i;
  printf("\nEnter How many elements you want to put in Array:");
  scanf("%d", &size);
  int ARR[size];
  printf("Enter Array elements in Sorted Form:");
  for (i = 0; i < size; i++)
  {
    scanf("%d", &ARR[i]);
  }
  printf("\nArray Before Removing Duplicates: ");
  for (i = 0; i < size; i++)
  {
    printf("%d ", ARR[i]);
  }

  size = Remove_Duplicates(ARR, size);

  printf("\nArray After Removing Duplicates: ");
  for (i = 0; i < size; i++)
  { 
      printf("%d ", ARR[i]);
  }
  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}
*/
/*
#include<stdio.h>

int Remove_Duplicates(int *arr, int *n) 
{ 
	int hash[100000] = {0};
	int k = 0;
	
	// iterate each element of arr[]
	for(int i=0;i<*n;++i)
  {		
		/* if hash[a[i]] = 1, then it means a[i] is already present in the final list
		   thus do nothing and move to next iteration if hash[a[i]] = 0, then it means 
       this is first occurence of a[i] we insert a[i] to the final list and change 
       hash[a[i]] to 1 
     *//*  
		if(hash[arr[i]]==0)
    {
			hash[arr[i]] = 1;
			arr[k++] = arr[i];
    }		
	}
	*n = k;
}

void main() {

	int arr[] = { 5, 1, 7, 6, 0, 1, 9, 0, 9, 1, 4, 5, 6 };
	int n = sizeof(arr) / sizeof(int);
	
	printf("Array Before Removing Duplicate: \n");
	for(int i=0;i<n;++i)	
        printf("%d ",arr[i]);
	
	Remove_Duplicates(arr,&n);
	
	printf("\nArray After Removing Duplicate: \n");
	for(int i=0; i<n; ++i)	
       printf("%d ",arr[i]);	
}
*//*
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
struct Array
{
  int num; bool duplicate; 
}Arr[100];
void Remove_Duplicates(int n)
{
    //memset(&Arr, false, sizeof(Arr));
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {   
            if(Arr[i].duplicate==true)
            {
                continue;
            }
            else if(Arr[i].num == Arr[j].num)
            {
                Arr[j].duplicate = true;
            }
        }
    }
}
void main() 
{
   int N;
   printf("\nEnter desired Array size(max 100):");
   scanf("%d",&N);
   printf("Enter Array Elements :");
   for(int i=0; i<N; i++)
   {
      Arr[i].duplicate = false;
      scanf("%d",&Arr[i].num);
   }
	 //int arr[] = { 5, 1, 7, 6, 0, 1, 9, 0, 9, 1, 4, 5, 6 };
		  
	printf("Array Before Removing Duplicate: \n");
	for(int i=0; i<N; ++i)	
        printf("%d ",Arr[i].num);
	
	Remove_Duplicates(N);
	
	printf("\nArray After Removing Duplicate: \n");
	for(int i=0; i<N; ++i)	
    {   if(Arr[i].duplicate==false)
            printf("%d ",Arr[i].num);	
    }
} */
#include<stdio.h>
int Arr_old[100], Arr_new[100]; 
void Remove_Duplicates(int *n)
{
    int i, j, k=0;
    for(int i=0; i<*n; ++i)
    {
        for(j=0; j<k; ++j)
        {   
            if(Arr_old[i] == Arr_new[j])
                break;
        }
        if(j==k)
        {
           Arr_new[k] = Arr_old[i];
           k++; 
        }
    }
    *n =k; 
}
void main() 
{
   int N;
   printf("\nEnter desired Array size(max 100):");
   scanf("%d",&N);
   printf("Enter Array Elements :");
   for(int i=0; i<N; i++)
   {
      scanf("%d",&Arr_old[i]);
   }
			  
	printf("Array Before Removing Duplicate: \n");
	for(int i=0; i<N; ++i)	
        printf("%d ",Arr_old[i]);
	
	Remove_Duplicates(&N);
	
	printf("\nArray After Removing Duplicate: \n");
	for(int i=0; i<N; ++i)	
    {   
        printf("%d ",Arr_new[i]);	
    }
}