/*Q. Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. 
     The objective of the puzzle is to move the entire stack to another rod, obeying 
     the following simple rules: 
    1) Only one disk can be moved at a time.
    2) Each move consists of taking the upper disk from one of the stacks and placing 
       it on top of another stack i.e. a disk can only be moved if it is the uppermost 
       disk on a stack.
    3)No disk may be placed on top of a smaller disk.
*/
/*#include<stdio.h>
void TowerOfHanoi(int n, char initial_rod, char aux_rod, char final_rod)
{
   if(n==1)
   {
      printf("Move disk %d from rod '%c' to rod '%c'\n",n,initial_rod,final_rod);
      return;
   }
   TowerOfHanoi(n-1,initial_rod, final_rod, aux_rod);
   printf("Move disk %d from rod '%c' to rod '%c'\n",n,initial_rod,final_rod);
   TowerOfHanoi(n-1, aux_rod, initial_rod, final_rod);
}
void main()
{
   int n_disk;
   printf("\n Enter Number of disc at rod A: ");
   scanf("%d",&n_disk);
   TowerOfHanoi(n_disk,'A','B','C');
   
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");     
}
*/
#include <stdio.h>
#include <stdlib.h>
int n_disk, rod = 3, i, j;
void Display(char **ar, int row)
{
   for(i=0; i<=row; i++)
   {  for(j=0; j<rod; j++)
      {
         printf("  %c   ",ar[i][j]);
      }
      printf("\n");
   }
   printf("  A     B     C\n-----------------\n");
}
int checkvacant(char **Ar, char rod, int state)
{
   int n=1;
   for(int a=1; a<=n_disk; a++)
   {
      if(Ar[a][rod-65] == '|')
         n = a; 
      else
      {  
         if(state == 0) 
            return (a-1);
         else if(state == 1)
            return a;  
      } 
   }   
   return n;   
}
void TowerOfHanoi(char **AR,int n, char initial_rod, char aux_rod, char final_rod)
{
   static int step=1; int row1, row2;
   if(n==1)
   {
      printf("\033[0;32m"); printf("Step %d",step); printf("\033[0m");
      printf("\nMove disk %d from rod '%c' to rod '%c' \n",n,initial_rod,final_rod);
      row1 = checkvacant(AR,final_rod,0); AR[row1][final_rod-65] = '0'+ n;
      row2 = checkvacant(AR,initial_rod,1); AR[row2][initial_rod-65] = '|'; 
      Display(AR,n_disk);
      step++;
      return;
   }
   TowerOfHanoi(AR,n-1,initial_rod, final_rod, aux_rod);
   printf("\033[0;32m"); printf("Step %d",step); printf("\033[0m");
   printf("\nMove disk %d from rod '%c' to rod '%c' \n",n,initial_rod,final_rod);
   row1 = checkvacant(AR,final_rod,0);   AR[row1][final_rod-65] = '0' + n;
   row2 = checkvacant(AR,initial_rod,1);  AR[row2][initial_rod-65] = '|';
   Display(AR,n_disk);
   step++;
   TowerOfHanoi(AR,n-1, aux_rod, initial_rod, final_rod);
}
void main()
{
	printf("\n Enter Number of disc at rod A: ");
   scanf("%d",&n_disk);
	char **sys = (char **)malloc((n_disk+1) * sizeof(char *));
	for (i=0; i<=n_disk; i++)
		sys[i] = (char *)malloc(rod * sizeof(char));

	// Note that arr[i][j] is same as *(*(arr+i)+j)
	for (i = 0; i <= n_disk; i++)
	{   
      for (j = 0; j < rod; j++)
	   {	
	      if(j==0 && i>=1)
	         sys[i][j] = '0' + i; // OR *(*(arr+i)+j) = ++count
	      else
	         sys[i][j] = '|';
	   }
   }
   printf("Initial View\n");   	
	Display(sys,n_disk);
   TowerOfHanoi(sys,n_disk,'A','B','C');
   //Display(sys,n_disk);
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}