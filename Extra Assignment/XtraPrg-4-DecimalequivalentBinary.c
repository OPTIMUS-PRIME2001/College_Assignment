/*Q. Write a C function to calculate the decimal equivalent of a binary number.
*/
#include<stdio.h>
#include<math.h>
void main()
{   int Bnum, originalBNum, remainder, result=0, i=0, n=0;
    printf("\n\nEnter an Binary Number:");
    scanf("%d",&Bnum);
    originalBNum = Bnum;
    //count the number of digits of num and store in n
    while(originalBNum!=0)
    { originalBNum /= 10;
      ++n;
    }
    originalBNum = Bnum;
    while(originalBNum!=0 && i<n)
    {   remainder = originalBNum % 10;
        //store the sum of the product of individual digits and index
        // raised to the power 2 in result
        result += (remainder * pow(2,i));
        originalBNum /=10;
        i++;
    }  
    printf("Decimal Equivalent Of Given Binary Number is: %d",result);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");    
}
/*
#include<stdio.h>
#include<math.h>
void main()
{   int Bnum, originalBNum, remainder, result=0 , base=1;
    printf("\n\nEnter an Binary Number:");
    scanf("%d",&Bnum);
    originalBNum = Bnum;
    
    while(originalBNum!=0)
    {  remainder = originalBNum % 10;
       //store the sum of the product of individual digits and index
       // raised to the power 2 in result
       result += (remainder * base);
       originalBNum /=10;
       base *= 2;
    }       
    printf("Decimal Equivalent Of Given Binary Number is: %d",result);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");    
}
*/