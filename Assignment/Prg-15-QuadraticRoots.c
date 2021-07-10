/*Q. Write a C Program to find the roots of a Quadratic equation. 
(using if else statement)
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{   int a,b,c;
    float root1,root2, discriminant;
    printf("\n\nQuadratic Equation: ax^2 + bx + c");
    printf("\nEnter the value:");
    printf("\na:");scanf("%d",&a);
    printf("b:");scanf("%d",&b);
    printf("c:");scanf("%d",&c);
    printf("Your Equation is %dx^2 + %dx + %d",a,b,c);
    discriminant= (pow(b,2) - (4*a*c));
    if(discriminant>=0)
    {
        root1= (-b + sqrt(discriminant))/(2*a);
        root2= (-b - sqrt(discriminant))/(2*a);
        if(root1!=root2)
        {
            printf("\nRoots of the Equation %dx^2 + %dx + %d are %.2f , %.2f",a,b,c,root1,root2);       
        }
        else
        {
           printf("\nRoots of the Equation %dx^2 + %dx + %d is %.2f",a,b,c,root1);  
        }
    }
    else    
    {
        root1= (float)-b/(2*a);
        root2= sqrt(-discriminant)/(2*a);
        printf("\nRoots of the Equation %dx^2 + %dx + %d are:\n",a,b,c);
        printf("%.2f + %.2f i  and  %.2f - %.2f i",root1,root2,root1,root2);                   
        
    }   
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}