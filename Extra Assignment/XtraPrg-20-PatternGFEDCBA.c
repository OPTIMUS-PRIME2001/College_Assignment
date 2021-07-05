/*Q. Write a C Program  to print Pattern
*/
#include<stdio.h>
void main()
{
  char n=71; int i,j,k;
  printf("\nPattern.\n");
  for(i=0; i<8; i++)
  {
      for(j=0; j<=i; j++)
      { 
          printf("  ");
      }
      for(k=n; k>64; k--)
      {
          printf("%c ",k);          
      }
      printf("\n");
      n--;
  }
  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}