/*Q. Write a C Program to generate the following patterns
a. *           b.       *      c. * * * *     d. * * * *
   * *                * *           * * *        * * *
   * * *            * * *             * *        * * 
   * * * *        * * * *               *        *
*/
#include<stdio.h>
void main()
{ int i, j, k, m=1, n=4;
  printf("\na.\n  ");
  for(i=0; i<4; i++)
  {
      for(j=0; j<=i; j++)
      {
          printf("* ");
      }
      printf("\n  ");
  }
  printf("\nb.\n");
  for(i=5; i>1; i--)
  {
      for(j=0; j<i-1;j++)
      {
          printf("  ");
      }
      for(k=0; k<m; k++)
      {
          printf("* ");
      }
      printf("\n");
      m++;
  }
  printf("\nc.\n");
  for(i=0; i<5; i++)
  {
      for(j=0; j<=i; j++)
      { 
          printf("  ");
      }
      for(k=0; k<n; k++)
      {
          printf("* ");          
      }
      printf("\n");
      n--;
  }
  printf("d.\n  ");
  for(i=4; i>=1; i--)
  {
      for(j=0; j<i; j++)
      {
          printf("* ");
      }
      printf("\n  ");      
  }
}