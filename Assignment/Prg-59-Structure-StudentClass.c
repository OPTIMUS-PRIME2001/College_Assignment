/*Q.WACP that can maintain the name, roll number and marks of a class of students. 
    The size of the class is variable. Include function to compute the average marks of the class.
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    char Name[25];
    int Roll_No;
    float marks;
}Students; 
float average(Students info[], int s)
{
    float avg=0;
    for(int i=0; i<s; i++)
    {
        avg += info[i].marks; 
    }
    avg /= s;
    return avg;
}
void input_info(Students info[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("#%d\n",i+1);
        printf("Name: ");  scanf("%s[^\n]",&info[i].Name);
        printf("Roll No.: ");  scanf("%d",&info[i].Roll_No);
        printf("Marks : ");  scanf("%f",&info[i].marks);
    }   
}
void main()
{
    int C_size; Students *info;
    printf("Enter Total Number of Students in the Class : ");
    scanf("%d",&C_size);
    info = (Students *)malloc(C_size * sizeof(Students));
    input_info(info,C_size);
    printf("The average of marks of all students is: %.2f",average(info,C_size));
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");  
}   