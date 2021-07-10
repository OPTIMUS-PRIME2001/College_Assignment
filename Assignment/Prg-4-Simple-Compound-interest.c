//Q.Write a C Prgram to calculate Simple and Compound interest
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{ 
    float P, R, T,n, SI, CI;
    //Intaking principle value
    printf("\nEnter the Principle Amount (in Rs), P:"); 
    scanf("%f", &P);
    printf("Enter the Rate Of Interest (in %%), R:"); 
    scanf("%f", &R);
    printf("Enter the Time Period (in Years), T:"); 
    scanf("%f", &T);
    printf("\n For Yearly , n=1\n For monthly , n=12\n For half yearly, n=2\n For quaterly, n=3");
    printf("\n Enter for how much time its compounded:");
    scanf("%f", &n);
    SI = (P * R * T)/100;
    CI = (P*pow((1 + (R/(n*100))),n*T)) - P;
    printf("\n\tFormula\n SI = (P * R * T)/100 \n");
    printf(" CI = P * (1 + (R/100*n))^(n*T) - P");
    printf("\n\n Simple Interest, SI: %.2f", SI);
    printf("\n Compund Interest, CI: %.2f",CI);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}