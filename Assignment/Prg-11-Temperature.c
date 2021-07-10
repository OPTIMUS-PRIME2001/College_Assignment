//Q. Write a C Program to convert temperature in degree F to degree C and vice versa.
#include<stdio.h>
#include<stdlib.h>
int main()
{  int choice;
   float ftemp, ctemp;
   printf("\n\n\tTemperature Conversion Menu");
   printf("\n1.Fahrenheit To Celcius\n2. Celcius To Fahrenheit");
   printf("\nEnter Your Choice (1 or 2):");
   scanf("%d", &choice);
   if(choice==1)
   {
     printf("\nEnter temperature in Fahrenheit:");
     scanf("%f", &ftemp);
     ctemp = (ftemp - 32)/1.8;
     printf("The temperature in celcius is:%.2f",ctemp);
     printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
   }
   else if(choice==2)
   {
     printf("\nEnter temperature in Celcius:");
     scanf("%f", &ctemp);
     ftemp = 1.8*ctemp + 32;
     printf("The temperature in celcius is:%.2f",ftemp);
     printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
   }
   else
   {
      printf("\nYou Have Choosen a wrong option");
   }  
    return 0;
}