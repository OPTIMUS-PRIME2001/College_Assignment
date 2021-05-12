//Q. Write a C Program to swap two integer numbers using bitwise operators.
#include<stdio.h>
#include<stdlib.h>
void main(){
    int num1,num2;
    printf("\nEnter two number:");
    scanf("%d %d",&num1,&num2);
    printf("Before swapping two numbers \n a:%d\n b:%d\n",num1,num2);
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2; 
    printf("After Swapping two numbers\n a:%d\n b:%d",num1,num2);    
}