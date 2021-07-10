/*Q. Write a C function to find the largest of three numbers using pass by reference. 
     The function to find the largest should return a pointer.
*/
#include<stdio.h>
float LARGE(float *a, float *b, float *c)
{   /*if(*a > *b)
    {
      if(*a > *c)
        return *a;
      else 
        return *c;
    }
    else
    { if(*b > *c)
        return *b;
      else 
        return *c;
    }
    */
   float *max;
   *max = (*a > *b ? (*a > *c ? *a : *c) : ( *b > *c ? *b : *c));
   return *max;
}
void main()
{   float X, Y, Z;
    printf("\n\nEnter Three Numbers:");
    scanf("%f %f %f",&X,&Y,&Z);
    printf("\nThe Greatest of the numbers %.0f, %.0f, %.0f is %.0f",X,Y,Z,LARGE(&X, &Y, &Z)); 
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}     