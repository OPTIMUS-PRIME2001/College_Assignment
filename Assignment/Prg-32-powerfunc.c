/*Write a C function to calculate the power of a number x^r.
*/
#include<stdio.h>
/*double Pow(double X,double Y)
{ double Result=1;
   if(Y!=0)
   {
      return (X*Pow(X,Y-1));
   }
   else
   {
      return 1;
   }    
}
*/
double Pow(double X,double Y)
{ double Result=1;
   while(Y!=0)
   {
      Result *= X;
      --Y;
   }
   return Result; 
}

void main()
{ double base,exp,r;
  printf("\n\nEnter a base number:");
  scanf("%lf",&base);  
  printf("Enter an exponent:");
  scanf("%lf",&exp);
  r=Pow(base,exp);
  printf("Value of %.0lf^%.0lf is: %.0lf",base,exp,r);   
}