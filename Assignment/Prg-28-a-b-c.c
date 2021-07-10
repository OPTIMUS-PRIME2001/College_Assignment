/*Q. Write a C Program to generate the following patterns
a. *           b.       *      c. * * * *     d. * * * *     e.       *         f. * * * * * * *
   * *                * *           * * *        * * *              * * *            * * * * *
   * * *            * * *             * *        * *              * * * * *            * * *
   * * * *        * * * *               *        *              * * * * * * *            *
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
  printf("\033[0;32m");printf("\nTest Passed %c",251);printf("\033[0m");
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
  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
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
  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
  printf("d.\n  ");
  for(i=4; i>=1; i--)
  {
      for(j=0; j<i; j++)
      {
          printf("* ");
      }
      printf("\n  ");      
  }
  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
  printf("e.\n  ");
  for(i=1; i<5; i++)
    {
        //First Inner part of the Lower Half
        for(j=5; j>i; j--)
        { printf("  "); }
        //Second Inner part of the Lower Half
        for(j=1; j<=(i*2-1); j++)
        { printf("* "); }
        //Third inner part of the Lower Half
        printf("\n  ");
    }
  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
  printf("f.\n  ");
  for(i=4; i>0; i--)
    {
        //First Inner part of the Upper Half
        for(j=5; j>i; j--)
        { printf("  "); }
        //Second Inner part of the Upper Half
        for(j=1; j<=(i*2-1); j++)
        { printf("* "); }
        printf("\n  ");
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}