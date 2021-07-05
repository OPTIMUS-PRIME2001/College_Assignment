#include<stdio.h>
float sum=0,cpoint=0,sum_marks=0;
char Letter_grade(int point)
{
    if(point==10)
       return 'O';
    else if(point==9)
       return 'E';
    else if(point==8)
       return 'A';
    else if(point==7)
       return 'B';
    else if(point==6)
       return 'C';
    else if(point==5)
       return 'D';
    else if(point==2)
       return 'F';
}
int Points(float marks)
{
    if(marks>=90 && marks<=100)
       return 10;
    else if(marks>=80 && marks<=89)
       return 9;
    else if(marks>=70 && marks<=79)
       return 8;
    else if(marks>=60 && marks<=69)
       return 7;
    else if(marks>=50 && marks<=59)
       return 6;
    else if(marks>=40 && marks<=49)
       return 5;
    else if(marks>=0 && marks<=39)
       return 2;
}
void sgpa(float marks, float credit)
{ char g; int P;
  P = Points(marks);
  g = Letter_grade(P); 
  sum_marks +=marks; 
  cpoint += credit;
  sum += (P*credit);
  printf("\t  %c\t\t %d \t %.1f \t    %.1f",g,P,credit,P*credit);
}
void main()
{   float P_marks[2],M_marks,B_marks[2],W_marks,Sgpa;
    float credits[6]={4.0,4.0,4.0,1.5,1.0,3.0};
    printf("\nSGPA CALCULATOR\n");
    printf("\nEnter marks in Physics I, (BSPH101): ");
    scanf("%f",&P_marks[0]);
    printf("Enter marks in Mathematics IA, (BSM101):");
    scanf("%f",&M_marks);
    printf("Enter marks in Basic Electrical Engineering, (ESEE101):");
    scanf("%f",&B_marks[0]);
    printf("Enter marks in Physics I Laboratory, (BSPH191:) ");
    scanf("%f",&P_marks[1]);
    printf("Enter marks in Basic Electrical Engineering Laboratory, (ESEE191):");
    scanf("%f",&B_marks[1]);
    printf("Enter marks in Workshop/Manufacturing Practices Laboratory,(ESME192):");
    scanf("%f",&W_marks);
    
    printf("\n\n Sub Code\t Sub Name\t\t\t\tmarks\tLetter Grade\tPoints  Credits  Credits Points");
    printf("\n BSPH101\tPhysics I\t\t\t\t %.0f",P_marks[0]);sgpa(P_marks[0],credits[0]);
    printf("\n BSM101 \tMathematics IA\t\t\t\t %.0f",M_marks);sgpa(M_marks,credits[1]);
    printf("\n ESEE101\tBasic Electrical Engineering\t\t %.0f",B_marks[0]);sgpa(B_marks[0],credits[2]);
    printf("\n BSPH191\tPhysics I Laboratory\t\t\t %.0f",P_marks[1]);sgpa(P_marks[1],credits[3]);
    printf("\n ESEE191\tBasic Electrical Engineering Laboratory  %.0f",B_marks[1]);sgpa(B_marks[1],credits[4]);
    printf("\n ESME192\tWorkshop/Manufacturing Prac Laboratory   %.0f",W_marks);sgpa(W_marks,credits[5]);
    printf("\n\t\t\t\t\t\t  Total  %.0f\t\t\t\t%.1f \t    %.0f",sum_marks,cpoint,sum);
    Sgpa= sum/cpoint;
    printf("\nSGPA  ODD.(1st) SEMESTER %.2f",Sgpa);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}