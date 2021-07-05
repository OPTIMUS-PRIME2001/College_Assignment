/*Q. Write a C program that will take a Matrix Dimension , Starting Position index
     and Destination Position index from user and calculate total no of ways to reach 
     desitination from Start. You are only allowed to move right and bottom direction.
     for example.
     user input : No of rows = 4            Start index is = [0][0]
                  No of columns = 4         Destination index is = [3][3]
    Program Shows a Matrix View: 
                              __0___1___2___3__
                            0 | S |   |   |   |            Program will give output:
                              -----------------            
                            1 |   |   |   |   |            The Total Number of ways
                              -----------------            to rach destination index
                            2 |   |   |   |   |            form Start position is: 20 
                              -----------------             
                            3 |   |   |   | E |
                              -----------------
*/
/*
#include<stdio.h>
double factorial(double num)
{
  if(num==0)
    return 1;
  else if(num==1)
    return 1;
  else
    return num*factorial(num-1);    
}
void main()
{   int  row, col, StartPos_row, StartPos_col, EndPos_row, EndPos_col, distance, i, j;;
    double nume, deno , ways;    
    printf("\n\tWAYS TO REACH START TO END POSITION IN 2D MATRIX\n\n");
    printf("Enter Number of Rows and Number of Columns");
    printf("\nRows :"); scanf("%d",&row);
    printf("Column :"); scanf("%d",&col);
    printf("\nEnter the index position of Starting:");
    printf("\nStartPos_row: "); scanf("%d",&StartPos_row);
    printf("StartPos_column: "); scanf("%d",&StartPos_col);
    printf("\nEnter the index position of Destination:");
    printf("\nEndPos_row: "); scanf("%d",&EndPos_row);
    printf("EndPos_column: "); scanf("%d",&EndPos_col);
    printf("\n\t MATRIX VIEW\n");
    printf("\033[0;32m"); printf("  Start is denoted by S");
    printf("\033[0;31m"); printf("\n  Destination is denoted by E\n ");
    printf("\033[0m");
    // Printing the Matrix View to show start and End position
    for (j = 0; j < col; j++)
        {
            printf("----");
        }
        printf("- \n");
    for (i = 0; i < row; i++)
    {
        printf(" | ");
        for (j = 0; j < col; j++)
        {
            if(i==StartPos_row && j==StartPos_col)
            {  printf("\033[0;32m"); printf("S");printf("\033[0m");   }
            else if(i==EndPos_row && j==EndPos_col)
            {  printf("\033[0;31m"); printf("E"); printf("\033[0m");  }
            else
            {  printf(" ");    }
            printf(" | ");
        }
        printf("  \n ");
        for (int j = 0; j < col; j++)
        { printf("----");    }
        printf("- \n");
    }
    //Compute number ways
    nume = factorial((EndPos_row - StartPos_row) + (EndPos_col - StartPos_col));
    deno = factorial(EndPos_row - StartPos_row) * factorial(EndPos_col - StartPos_col);
    ways = nume/deno;
    printf("\nTotal ways to reach Destination Position from Start Position is: %.0lf", ways);
    printf("\n If the distance between center of two blocks is 1 unit.\n");
    distance = (EndPos_row - StartPos_row)+ (EndPos_col - StartPos_col);
    if(distance == 1)
    { printf(" Then The Total distance covered to reach Desitination Position from Start is %d unit",distance);
    }
    else
    {
        printf(" Then The Total distance covered to reach Desitination Position from Start is %d units",distance);
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}
*/
#include <stdio.h>
void main()
{
    int row, col, StartPos_row, StartPos_col, EndPos_row, EndPos_col;
    int i, j, distance;
    printf("\n\tWAYS TO REACH START TO END POSITION IN 2D MATRIX\n\n");
    printf("Enter Number of Rows and Number of Columns");
    printf("\nRows :");
    scanf("%d", &row);
    printf("Column :");
    scanf("%d", &col);
    double Map[row][col];
    printf("\nEnter the index position of Starting:");
    printf("\nStartPos_row: ");
    scanf("%d", &StartPos_row);
    printf("StartPos_column: ");
    scanf("%d", &StartPos_col);
    printf("\nEnter the index position of Destination:");
    printf("\nEndPos_row: ");
    scanf("%d", &EndPos_row);
    printf("EndPos_column: ");
    scanf("%d", &EndPos_col);
    printf("\n\t MATRIX VIEW\n");
    printf("\033[0;32m");
    printf("  Start is denoted by S");
    printf("\033[0;31m");
    printf("\n  Destination is denoted by E\n ");
    printf("\033[0m");
    // Printing the Matrix View to show start and End position
    for (j = 0; j < col; j++)
    {
        printf("----");
    }
    printf("- \n");
    for (i = 0; i < row; i++)
    {
        printf(" | ");
        for (j = 0; j < col; j++)
        {
            if (i == StartPos_row && j == StartPos_col)
            {
                printf("\033[0;32m");
                printf("S");
                printf("\033[0m");
            }
            else if (i == EndPos_row && j == EndPos_col)
            {
                printf("\033[0;31m");
                printf("E");
                printf("\033[0m");
            }
            else
            {
                printf(" ");
            }
            printf(" | ");
        }
        printf("  \n ");
        for (int j = 0; j < col; j++)
        {
            printf("----");
        }
        printf("- \n");
    }
    // There is only one way to go right element or bottom elemts of Start Pos
    i = StartPos_row;
    for (j = StartPos_col; j <= EndPos_col; j++)
    {
        Map[i][j] = 1;
    }
    j = StartPos_col;
    for (i = StartPos_row; i <= EndPos_row; i++)
    {
        Map[i][j] = 1;
    }
    //Calculating ways and store in matrix
    for (i = StartPos_row + 1; i <= EndPos_row; i++)
    {
        for (j = StartPos_col + 1; j <= EndPos_col; j++)
        {
            Map[i][j] = Map[i][j - 1] + Map[i - 1][j];
        }
    }
    printf("\nTotal ways to reach Destination Position from Start Position is: %.0lf \n", Map[EndPos_row][EndPos_col]);
    printf("\n If the distance between center of two blocks is 1 unit.\n");
    distance = (EndPos_row - StartPos_row)+ (EndPos_col - StartPos_col);
    if(distance == 1)
    { printf("Then The Total distance covered to reach Desitination Position from Start is %d unit",distance);
    }
    else
    {
        printf("Then The Total distance covered to reach Desitination Position from Start is %d units",distance);
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n", 251);printf("\033[0m");
}