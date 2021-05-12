/*Q. Write a C function to calculate the binary equivalent of a decimal number.
*/
#include<stdio.h>
/*
void Converter(int Decimal)
{  // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) 
    {
        int k = Decimal >> i;
        if (k & 1)
            {printf("1");}
        else
           { printf("0");}
    }
}
*/
void Converter(int Decimal)
{  int i,Binary[16];
   for(i=0;Decimal>0;i++)
   {
       Binary[i]= (Decimal % 2);
       Decimal=Decimal/2;
   }
   printf("Binary Of Given Number is: ");
   for(i=i-1;i>=0;i--)
   {
       printf("%d",Binary[i]);
   }
}
void main()
{   int dec; 
    printf("\n\nEnter Decimal Number: ");
    scanf("%d",&dec);
    Converter(dec);
}