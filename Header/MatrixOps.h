/*
         MENU
1. Addition Of Matrix
2. Subtraction Of Matrix
3. Multiplication of Matrix
4. Transpose of Matrix
5. Multiply then transpose
6. Adjoint of Matrix 
7. Determinant of Matrix
8. Inverse of Matrix
passcase took values from 1 to 8
*/
#include<stdio.h>
int i, j, row1, col1, row2, col2, row, col, order, det;
//PROTOTYPES
/*
Function under <MatrixOps.h> to print the Matrix in a specific format.
Function defination is 
void MatrixPrint(int m1[row][col],int passcase);
*/
void MatrixPrint(int m1[row][col],int);
/*
Function under <MatrixOps.h> to add two Matrices.
Function defination is 
void Addition(int m1[][],int m2[][],int passcase);
*/
void Addition(int m1[row][col],int m2[row][col],int pass);
/*
Function under <MatrixOps.h> to subtract second matrix from first Matrix.
Function defination is 
void Subtraction(int m1[][],int m2[][],int passcase);
*/
void Subtraction(int m1[row][col],int m2[row][col],int pass);
/*
Function under <MatrixOps.h> to transpose a matrix.
Function defination is 
void Transpose(int m1[][],int passcase);
*/
void Transpose(int matrix[row][col], int pass);
/*
Function under <MatrixOps.h> to Multiplication of two matrices.
Function defination is 
void Multiplication(int m1[][],int m2[][],int passcase);
if passcase is 3, then only multiplication of two matrices is done
if the passcase is 5 then transpose operation takes place on multiplication of two matrices
*/
void Multiplication(int m1[row1][col1], int m2[row2][col2], int pass);
/*Function under <MatrixOps.h> to find cofactors of matrix.
 Function to get cofactor of det[p][q] in temp[][]. o is current dimension of mat[][]
Function defination is 
void getCofactor(int det[][],int temp[][],int p, int q, int order);
*/
void getCofactor(int det[order][order], int temp[order][order], int p, int q, int o);
/*
 Recursive Function under <MatrixOps.h> for finding determinant of matrix.  
 n is current dimension of mat[][]. 
 Function defination is 
int determinantOfMatrix(int det[][],int temp[][],int p, int q, int order);
*/
int determinantOfMatrix(int o, int mat[order][order]);
/*Function under <MatrixOps.h> to find Adjoint of matrix.
 Function uses, getcofactor function and Recurrsive determinant function.
void Adjoint(int o,int mat[order][order], int passcase);
*/
void Adjoint(int o,int mat[order][order], int pass);
/*Function under <MatrixOps.h> to find Inverse of matrix.
 Function uses, Adjoint function and Recurrsive determinant function.
void Inverse(int o, int mat[order][order],int passcase);
*/
void Inverse(int o, int mat[order][order],int pass);



void MatrixPrint(int m1[row][col],int pass) 
{   //printf("%d\n",pass);
    // PRINTING THE MATRIX IN IT'S FORM
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
        if(i == (row-1)/2 && pass==8)
           printf("|  * 1 / %d\n",det);
        else   
           printf("| \n");
    }
}
void Addition(int m1[row][col],int m2[row][col],int pass)
{
    int Add[row][col];
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            Add[i][j] = m1[i][j] + m2[i][j];
    printf("\nSum Of two Matrices\n");
    MatrixPrint(Add,pass);
}
void Subtraction(int m1[row][col],int m2[row][col],int pass)
{
    int Diff[row][col];
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            Diff[i][j] = m1[i][j] - m2[i][j];
    printf("\nDifference Of two Matrices\n");
    MatrixPrint(Diff,pass);
}
void Transpose(int matrix[row][col], int pass)
{
    int transpose[col][row];
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            transpose[j][i] = matrix[i][j];
            
    row = row + col;
    col = row - col;
    row = row - col;
    MatrixPrint(transpose,pass);       
}
void Multiplication(int m1[row1][col1], int m2[row2][col2], int pass)
{
    int Product[row1][col2];
    for(i=0; i<row ; i++)
    {   for(j=0; j<col; j++)
       {   Product[i][j] = 0;
           for(int k=0; k<col1; ++k)
           {
               Product[i][j] += m1[i][k] * m2[k][j];   
           }
       }
    }
    printf("\nThe Product of Two Matrices is:\n");
    MatrixPrint(Product,pass);
    if(pass == 5)
    {
        printf("\nThe Transpose of Product Matrix is:\n");
        Transpose(Product,pass);
    }
}

void getCofactor(int det[order][order], int temp[order][order], int p, int q, int o)
{
    int m = 0, n = 0;
 
    // Looping for each element of the matrix
    for (i = 0; i < o; i++)
    {
        for (j = 0; j < o; j++)
        {
            //Copying into temporary matrix only those element which are not in given row and column
            if (i != p && j != q)
            {
                temp[m][n++] = det[i][j];

                // Row is filled, so increase row index and reset col index
                if (n == o - 1)
                {
                    n = 0;    m++;
                }
            }
        }
    }
}
 
int determinantOfMatrix(int o, int mat[order][order])
{
    int Det = 0; 
    
    if (o == 1)        //  Base case : if matrix contains single element
        return mat[0][0];
 
    int temp[order][order];   // To store cofactors 
    int sign = 1;       // To store sign multiplier
 
    // Iterate for each element of first row
    for (int f = 0; f < o; f++)
    {
        // Getting Cofactor of mat[0][f]
        getCofactor(mat, temp, 0, f, o);
        Det += sign * mat[0][f] * determinantOfMatrix(o-1,temp); 
        // terms are to be added with alternate sign
        sign = -sign;
    } 
    return Det;
}
void Adjoint(int o,int mat[order][order], int pass)
{
    int adj[order][order], temp[order][order];
    if(o == 1)
    {  adj[0][0] = 1; return; }
    int sign = 1 ;
    for (i=0; i<o; i++)
    {
        for (j=0; j<o; j++)
        {
            // Get cofactor of A[i][j]
            getCofactor(mat, temp, i, j, o);  
            // sign of adj[j][i] positive if sum of row and column indexes is even.
            sign = ((i + j)%2 == 0)? 1: -1;  
            // Interchanging rows and columns to get the transpose of the cofactor matrix
            adj[i][j] = (sign)*(determinantOfMatrix(o - 1, temp));
        }
    }
    row = col = o;
    Transpose(adj,pass);
}
void Inverse(int o, int mat[order][order],int pass)
{
    det = determinantOfMatrix(o, mat);
    if (det == 0)
    {
        printf("Singular Matrix , Can't find its Inverse");
        return;
    }
    Adjoint(o, mat, pass);
}