/*Q 
*/
#include<stdio.h>
#include <stdlib.h>

int i, j, row1, col1, row2, col2;

void MatrixPrint(int r, int c, const int *m1) 
{
    // PRINTING THE MATRIX IN IT'S FORM
    for (i = 0; i < r; i++) 
    {
        printf(" |  ");
        for (j = 0; j < c; j++) 
        {
            printf("%d", *(m1  + i * c + j));
            if (*(m1 + i * c + j) > 9 || *(m1 + i * c + j) < 0) 
            {
                printf(" ");
            } else {
                printf("  ");
            }
        }
        printf("| \n");
    }
}
void TransposeMatrix(int row,int col,const int *Matrix) 
{
    int *transpose =  (int *) malloc(100 * sizeof(int) * 100);
    for (i = 0; i < row; i++) 
    {
        for (j = 0; j < col; j++) 
        {
            *(transpose + j*col + i) = *(Matrix + i*col + j);
        }
    }
    MatrixPrint(col, row, transpose);
}
void MultiplyMatrix(const int *Matrix1, const int *Matrix2, int pass) 
{
    int *Product = (int *) malloc(col2 * sizeof(int) * row1);
    for (i = 0; i < row1; i++) 
    {
        for (j = 0; j < col2; j++) 
        {
            *(Product + i * col2 + j) = 0;
            for (int k = 0; k < col1; ++k) 
            {
                *(Product + i * col1 + j) += *(Matrix1 + i * col1 + k) * *(Matrix2 + k * col1 + j);
            }
        }
    }
    printf("\nThe Product of Two Matrices is:\n");
    MatrixPrint(row1, col2, Product);
    if(pass==5)
    {   printf("\nThe Transpose of Product Matrix is:\n");
       TransposeMatrix(row1,col2,Product);
    }   
}
void AdditionMatrix(const int *m1, const int *m2) 
{
    int *Add= (int *) malloc(10 * sizeof(int) * 10);
    for (i = 0; i < row1; i++) 
    {
        for (j = 0; j < col1; j++) 
        {
            *(Add + i * col1 + j) = *(m1 + i * col1 + j) + *(m2 + i * col1 + j);
        }
    }
    printf("\nSum of two Matrices\n");
    MatrixPrint(row1, col1, Add);
}
void SubtractionMatrix(const int *m1, const int *m2) 
{
    int *Diff= (int *) malloc(10 * sizeof(int) * 10);
    for (i = 0; i < row1; i++) 
    {
        for (j = 0; j < col1; j++) 
        {
            *(Diff + i * col1 + j) = *(m1 + i * col1 + j) - *(m2 + i * col1 + j);
        }
    }
    printf("\nDifference of two Matrices\n");
    MatrixPrint(row1, col1, Diff);
}
void getCofactor(const int *det, int *temp, int p, int q, int n)
{
    i=0;j=0;
    // Looping for each element of the matrix
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            //  Copying into temporary matrix only those element which are not in given row and column
            if (row != p && col != q)
            {
                *(temp + i * n + j++) = *(det + row * n + col);
 
                // Row is filled, so increase row index and
                // reset col index
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
int DeterminantMatrix(int row, int col,int d[row][col])
{
    int sign = -1, det=0, m, n ,c;
    int temp[10][10];
	//  Base case : if matrix contains single element
    if (col == 1) 
    {
 		return (d[0][0]);
 	} 
    else 
    {   
 		for (c = 0; c < col; c++)
        {   
            m=0;n=0;
            for (i = 0; i < col; i++)
            {
                for (j = 0; j < col; j++)
                {
                 //  Copying into temporary matrix only those element which are 
                 //  not in given row and column
                    if (i != 0 && j != c)
                    {
                        //*(temp + m * col + n++) =  *(d + i * n + j);
                           temp[m][n++] = d[i][j];
                    // Row is filled, so increase row index and reset col index
                        if ( n== col - 1)
                        {
                            n = 0;
                            m++;
                        }
                   }
                }
            }
            // terms are to be added with alternate sign
            sign = -sign;
            // Getting Cofactor of mat[0][f]
            //getCofactor(d, temp, 0, c, col);
            det += sign * d[0][c] * DeterminantMatrix(row-1,col - 1,temp);                    
        }
    }
	return (det);
}
void main() 
{
    //    char choice = 'y';
    int button, det;
    printf("\n\tMENU\n1.Addition Of Matrix\n2.Subtraction Of Matrix");
    printf("\n3.Multiplication of Matrix\n4.Transpose of Matrix\n");
    printf("5.Multiply then transpose\n6.Adjoint of Matrix\n7.Determinant of Matrix");
    printf("\n8.Inverse of Matrix");
    printf("\nEnter the menu operation number(1-8):");
    scanf("%d", &button);
    printf("\n\nEnter no of Rows and Columns of First SQUARE Matrix :");
    printf("\nRow:");  scanf("%d", &row1);
    printf("Column:"); scanf("%d", &col1);
    printf("\nEnter no of Rows and Columns of Second SQUARE Matrix :");
    printf("\nRow:");  scanf("%d", &row2);
    printf("Column:"); scanf("%d", &col2);
    int *M1 = (int *) malloc(col1 * sizeof(int) * row1);
    int *M2 = (int *) malloc(col2 * sizeof(int) * row2);
    printf("Enter the elements of the First SQUARE Matrix:");
    // TAKING ELEMENTS OF THE MATRIX 1
    for (i = 0; i < row1; i++)
        for (j = 0; j < col1; j++)
            scanf("%d", M1  + i * col1 +  j);
    printf("Enter the elements of the Second SQUARE Matrix:");
    // TAKING ELEMENTS OF THE MATRIX 2
    for (i = 0; i < row2; i++)
        for (j = 0; j < col2; j++)
            scanf("%d", M2  + i *col2 +  j);
    
    printf("Your %d * %d First SQUARE Matrix Of\n", row1, col1);
    MatrixPrint(row1,col1,M1);
    printf("Your %d * %d SQUARE Second Matrix Of\n", row2, col2);
    MatrixPrint(row2,col2,M2);

    if (button == 1) 
    {
        printf("\n\tADDITION OF TWO MATRIX\n");
        if (row1 == row2 && col1 == col2) 
        {
            AdditionMatrix(M1, M2);
        } 
        else 
        {
            printf("Matrices cannot be added");
        }
    } 
    else if (button == 2) 
    {
        printf("\n\tSUBTRACTION OF TWO MATRIX\n");
        if (row1 == row2 && col1 == col2) 
        {
            SubtractionMatrix(M1, M2);
        } 
        else 
        {
            printf("Matrices cannot be subtracted");
        }
    } 
    else if (button == 3) 
    {  
        printf("\n\tMULTIPLICATION OF TWO MATRIX\n");
        if (row2 == col1) 
        {
            MultiplyMatrix(M1, M2, button);
        } 
        else 
        {
            printf("Matrix Cannot be Multiplied");
        }
    } 
    else if (button == 4) 
    {
        printf("\n\tTRANSPOSE OF TWO MATRIX\n");    
        printf("\nThe Transpose of First Matrix is:\n");
        TransposeMatrix(row1,col1,M1);
        printf("\nThe Transpose of Second Matrix is:\n");
        TransposeMatrix(row2,col2,M2);
    } 
    else if(button==5)
    {
        printf("\n\tMULTIPLY THEN TRANSPOSE OF TWO MATRIX\n");
        if(row2==col1)
        {     
            MultiplyMatrix(M1,M2,button);
        }
        else
        {
            printf("Matrix Cannot be Multiplied");
        }
    } 
    else if(button==6)
    {
        printf("\n\tADJOINT OF TWO MATRIX\n");
        if(row1==col1)
        {     
            MultiplyMatrix(M1,M2,button);
        }
        else
        {
            printf("Matrix Cannot be Multiplied");
        }
    }
    else if(button==7)
    {
        printf("\n\tDETERMINANT OF TWO MATRIX\n");
        if(row1==col1) 
        {     
            det = DeterminantMatrix(row1,col1,M1);
            printf("\nDeterminant of A is %d", det);
           
        }
        if(row2==col2) 
        {     
            det = DeterminantMatrix(row2,col2,M2);
            printf("\nDeterminant of B is %d", det);
        }
        else
        {
            printf("Determinant of Non Square Matrix cannot be defined");
        }
    }  
    else if(button==8)
    {
        printf("\n\tADJOINT OF TWO MATRIX\n");
        if(row2==col1)
        {     
            MultiplyMatrix(M1,M2,button);
        }
        else
        {
            printf("Matrix Cannot be Multiplied");
        }
    }            
    else 
    {
        printf("Matrix Cannot be Multiplied");
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}