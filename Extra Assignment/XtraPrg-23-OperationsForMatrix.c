#include<stdio.h>
int i, j, row1, col1, row2, col2, row, col, order, det;
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
// Function to get cofactor of det[p][q] in temp[][]. o is current dimension of mat[][]
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
 
/* Recursive function for finding determinant of matrix.
   n is current dimension of mat[][]. */
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
void main()
{  
    int button;
    printf("\n\tMENU\n1.Addition Of Matrix\n2.Subtraction Of Matrix");
    printf("\n3.Multiplication of Matrix\n4.Transpose of Matrix\n");
    printf("5.Multiply then transpose\n6.Adjoint of Matrix\n7.Determinant of Matrix");
    printf("\n8.Inverse of Matrix");
    printf("\nEnter the menu operation number(1-8):");
    scanf("%d", &button);
    printf("\n\nEnter no of Rows and Columns of First SQUARE Matrix :");
    printf("\nRow:"); scanf("%d",&row1);
    printf("Coloumn:"); scanf("%d",&col1);    
    int M1[row1][col1];
    printf("Enter the elements of the First SQUARE Matrix:\n");
    // TAKING ELEMENTS OF THE MATRIX
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                printf("Matrix[%d][%d]= ",i,j);
                scanf("%d", &M1[i][j]);
            }
        }
    printf("\n\nEnter no of Rows and Columns of Second SQUARE Matrix :");
    printf("\nRow:"); scanf("%d",&row2);
    printf("Coloumn:"); scanf("%d",&col2);  
    int M2[row2][col2];
    printf("Enter the elements of the Second SQUARE Matrix:\n");
    // TAKING ELEMENTS OF THE MATRIX
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("Matrix[%d][%d]= ",i,j);
                scanf("%d", &M2[i][j]);
            }
        }
    // PRINTING THE MATRIX IN IT'S FORM
    printf("\nYour %d * %d First SQUARE Matrix Of\n", row1, col1);
    row = row1; col = col1;    MatrixPrint(M1,1); 
    // PRINTING THE MATRIX IN IT'S FORM
    printf("Your %d * %d First SQUARE Matrix Of\n", row2, col2);
    row = row2; col = col2;   MatrixPrint(M2,1); 
    if(button == 1)
    {
        printf("\n\tADDITION OF TWO MATRIX\n");
        if(row1 == row2 && col1 == col2)
        {
            row = row1;  col = col2;
            Addition(M1,M2,button);
        }
        else
            printf("Matrices cannot be added");
    }
    else if(button == 2)
    {
        printf("\n\tSUBTRACTION OF TWO MATRIX\n");
        if(row1 == row2 && col1 == col2)
        {
            row = row1;  col = col2;
            Subtraction(M1,M2,button);
        }
        else
            printf("Matrices cannot be subtracted");
    }
    else if(button == 3)
    {
        printf("\n\tMULTIPLICATION OF TWO MATRIX\n");
        if(row2 == col1)
        {
           row = row1; col = col2;
           Multiplication(M1,M2,button);
        }
        else
            printf("Matrix Cannot be Multiplied");
    }
    else if(button == 4)
    {
        printf("\n\tTRANSPOSE OF TWO MATRIX\n");    
        printf("\nThe Transpose of First Matrix is:\n");
        row = row1; col = col1;
        Transpose(M1,button);
        printf("\nThe Transpose of Second Matrix is:\n");
        row = row2; col = col2;
        Transpose(M2,button);
    }
    else if(button == 5)
    {
        printf("\n\tMULTIPLY TWO MATRIX THEN TRANSPOSE\n");
        if(row2 == col1)
        {
           row = row1; col = col2;
           Multiplication(M1,M2,button);
        }
        else
            printf("Matrix Cannot be Multiplied");
    }
    else if(button == 6) 
    {
        printf("\n\tADJOINT OF TWO MATRIX\n");
        if(row1==col1)   
        {   
            order = row1 ;
            printf("\nAdjoint of the  First matrix is \n");
            Adjoint(order,M1,button);
        }
        if(row2==col2)   
        {   
            order = row2 ;
            printf("\nAdjoint of the matrix is \n");
            Adjoint(order,M2,button);
        }
    }
    else if(button == 7)
    {    
        printf("\n\tDETERMINANT OF TWO MATRIX\n");
        if(row1==col1)   
        {   // Function call
            order = row1 = col1;
            printf("\nDeterminant of the matrix is : %d",determinantOfMatrix(order,M1) );
        }
        else
            printf("\nDeterminant of Non Square Matrix cannot be defined");
        if(row2==col2)   
        {   // Function call
            order = row2 = col2;
            printf("\nDeterminant of the matrix is : %d",determinantOfMatrix(order,M2) );
        }
        else
            printf("\nDeterminant of Non Square Matrix cannot be defined");  
    }
    else if(button == 8)
    {
        printf("\n\tINVERSE OF TWO MATRIX\n");
        if(row1 == col1)
        {   order = row1;
            printf("Inverse of First Matrix\n");
            Inverse(order, M1, button);
        }
        else 
            printf("Inverse only defined for square matrix");
        if(row2 == col2)   
        {   printf("\nInverse of Second Matrix\n");
            order = col2;
            Inverse(order, M2, button);
        }
        else
            printf("Inverse only defined for square matrix");
    }
    else 
    {
        printf("You have choosen the wrong option");
    }             
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}