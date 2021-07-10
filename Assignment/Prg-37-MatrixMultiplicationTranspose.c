/*Q. WACP to multiply two matrices and then find the transpose of the resultant matrix. 
     (use separate functions to multiply two matrices and to find the transpose)
*/
#include<stdio.h>
int i, j, row1, col1, row2, col2, row, col;
void MatrixPrint(int m1[row][col]) 
{   
    for (i = 0; i < row; i++) 
    {
        printf(" |  ");
        for (j = 0; j < col; j++) 
        {
            printf("%d", m1[i][j]);
            if (m1[i][j] > 9 || m1[i][j] < 0) 
                printf(" ");
            else 
                printf("  ");
        }
        printf("| \n");
    }
}
void TransposeMatrix(int Multiply[row][col])
{  int transpose[100][100];
   for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            transpose[j][i]= Multiply[i][j];
        
    printf("\nThe Transpose of Product Matrix is:\n"); 
    row = row + col;
    col = row - col;
    row = row - col;
    MatrixPrint(transpose);
}
void MultiplyMatrix(int Matrix1[row1][col1], int Matrix2[row2][col2])
{ int Product[row1][col2];
  for (i = 0; i < row1; i++)
   {   
        for (j = 0; j < col2; j++)
        { 
           Product[i][j]=0; 
           for(int k=0; k < col1; ++k)
            {
                Product[i][j] += Matrix1[i][k] * Matrix2[k][j];
            }    
        }
    }
    printf("\nThe Product of Two Matrices is:\n");
    MatrixPrint(Product);
    TransposeMatrix(Product);
}
void main()
{   printf("\n\nEnter no of Rows and Columns of First SQUARE Matrix :");
    printf("\nRow:"); scanf("%d",&row1);
    printf("Coloumn:"); scanf("%d",&col1);
    printf("\nEnter no of Rows and Columns of Second SQUARE Matrix :");
    printf("\nRow:"); scanf("%d",&row2);
    printf("Coloumn:"); scanf("%d",&col2);
    int M1[row1][col1],M2[row2][col2];

    if(row2==col1)
    {
        printf("Enter the elements of the First SQUARE Matrix:");
        // TAKING ELEMENTS OF THE MATRIX
        for (i = 0; i < row1; i++)
            for (j = 0; j < col1; j++)
                scanf("%d", &M1[i][j]);
          
        printf("Enter the elements of the Second SQUARE Matrix:");
        // TAKING ELEMENTS OF THE MATRIX
        for (i = 0; i < row2; i++)
            for (j = 0; j < col2; j++)
                scanf("%d", &M2[i][j]);
           
        // PRINTING THE MATRIX IN IT'S FORM
        printf("Your %d * %d First SQUARE Matrix Of\n", row1, col1);
        row = row1; col = col1;
        MatrixPrint(M1);        

        // PRINTING THE MATRIX IN IT'S FORM
        printf("Your %d * %d SQUARE Second Matrix Of\n", row2, col2);
        row = row2; col = col2;
        MatrixPrint(M2);
        
        row = row1; col1 = col2;
        MultiplyMatrix(M1,M2);
    }
    else
    {
        printf("Matrix Cannot be Multiplied");
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}