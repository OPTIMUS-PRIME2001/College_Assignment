/*Q. Write a C Program to find the roots of a Quadratic equation. 
(using if else statement)
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{   int a,b,c;
    float root1,root2;
    printf("\n\nQuadratic Equation: ax^2 + bx + c");
    printf("\nEnter the value:");
    printf("\na:");scanf("%d",&a);
    printf("b:");scanf("%d",&b);
    printf("c:");scanf("%d",&c);
    printf("Your Equation is %dx^2 + %dx + %d",a,b,c);
    root1= (-b + sqrt(pow(b,2) - (4*a*c)))/(2*a);
    root2= (-b - sqrt(pow(b,2) - (4*a*c)))/(2*a);
    if(root1!=root2)
    {
      printf("\nRoots of the Equation %dx^2 + %dx + %d are %.3f , %.3f",a,b,c,root1,root2);       
    }
    else
    {
      printf("\nRoots of the Equation %dx^2 + %dx + %d is %.3f",a,b,c,root1);  
    }   
    return 0;
}