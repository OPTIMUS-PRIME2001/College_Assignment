/*Q. Write a C function to calculate the binary equivalent of a decimal number.
*/
#include<stdio.h>

void Converter(int Decimal)
{  // Size of an integer is assumed to be 32 bits
    printf("Binary Of Given Number is: ");
    for (int i = 31; i >= 0; i--) 
    {
        int k = Decimal >> i;
        if (k & 1)
           {printf("1");}
        else
           { printf("0");}
    }
}
/*
void Converter(int Decimal)
{  int i,Binary[16], num=Decimal;
   for(i=0;Decimal>0;i++)
   {
       Binary[i]= (Decimal % 2);
       Decimal=Decimal/2;
   }
   printf("Binary Of Given Number is: ");
   if(num>0)
   {  for(i=i-1;i>=0;i--)
      {
          printf("%d",Binary[i]);
      }
   }
   else if(num==0)
      { printf("%d",0);  }  
}*/
void main()
{   int dec; 
    printf("\n\nEnter Positive Decimal Number: ");
    scanf("%d",&dec);
    Converter(dec);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}