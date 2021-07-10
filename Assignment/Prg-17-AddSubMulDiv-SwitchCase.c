/*Q. Write a C Program to add, subtract, multiply and divide two numbers 
using switch case.
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{   int choice;
    float num1, num2, result;
    printf("\n\n\t Menu ");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
    printf("\nEnter your choice (1-4):");
    scanf("%d",&choice);
    printf("\nEnter First Number:");
    scanf("%f",&num1);
    printf("Enter Second Number:");
    scanf("%f",&num2);
    switch(choice)
    {
        case 1:{ result = num1 + num2;
                 printf("\nAddition of %.2f and %.2f gives %.2f .",num1,num2,result);
                 printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
               }
               break;
        case 2: { result = num1 - num2;
                  printf("\nSubtraction of %.2f from %.2f gives %.2f .",num2,num1,result);
                  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");                 
                }
                break;
        case 3:{ result = num1 * num2;
                 printf("\nMultiplication of %.2f by %.2f gives %.2f .",num1,num2,result);
                 printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
               }
               break;
        case 4:{ if(num2!=0)
                 { result = num1 / num2;
                   printf("\nDivission of %.2f by %.2f gives %.2f .",num1,num2,result);
                 }
                 else
                 {
                   printf("\nCannot divide by 0.");
                 } 
                 printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
               }
               break;  
        default: printf("\n You have choosen the Wrong option!!");
    }
}