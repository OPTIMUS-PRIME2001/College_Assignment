/*Q. Write a C Program which will take values of number of rows and values of 
     number of columns, then Generate a Inner Clockwise Spiral Matrix and gives 
     us the output of the sum of Principal  Diagonal element and Secondary Diagonal
     elements.
     Input : 2 X 2               3 X 3            4 X 4              5 X 5
     Matrix:                                                      21 22 23 24 25
             1 2                 7  8  9        7  8  9  10       20 7  8  9  10
             4 3                 6  1  2        6  1  2  11       19 6  1  2  11
    Sum of all elements          5  4  3        5  4  3  12       18 5  4  3  12
    in both the diagonals                       16 15 14 13       17 16 15 14 13
    : 10                          : 25             : 56               : 101
*/
#include<stdio.h>
int M[1000][1000];
void Generate_Spiral(int row, int col, int mul)
{  int i, j, k=0, l=0;
   while( k<row && l<col && mul>0)            // k - starting row index
    {   for(i=l; i<col; i++)                  // l - starting column index
          {   M[k][i]=mul;    --mul;   }      // row - Ending row index + 1
          k++;                                // col - Ending column index + 1
        for(i=k; i<row; i++)  
          {   M[i][col-1]=mul;  --mul;   }
          col--;
        if(k<row)
        {   for(i=col-1; i>=l; --i)
            {    M[row-1][i]= mul;   --mul;     }
            row--;
        }  
        if(l<col)
        {   for(i=row-1; i>=k; --i)
            {     M[i][l]=mul;    --mul;       }
            l++;
        }
    }
}
void DiagSum(int row, int col)
{  int sum=0, i, j;
   //store sum of Principal Diagonal and Secondary Diagonal elements in sum  
   for(i=0 ; i<row ; i++)
   {   for(j=0; j<col; j++)
       {   if((i==j)|| ((i + j) == (row-1)))
           { sum += M[i][j];}
       }
   }
   printf("\nThe required sum of elements of both the diagonals is: %d",sum);
}
void main()
{   int i, j, m, row , col, multiply; 
    printf("\tSPIRAL SQUARE MATRIX SPIRALLY\n\n");
    printf("Enter no of Rows and Columns of SQUARE Matrix :"); 
    scanf("%d",&m);  row=col=m;
    multiply = row * col; 
    //Generating Spiral Matrix
    Generate_Spiral(row,col,multiply);
     // PRINTING THE MATRIX IN IT'S FORM
    printf(" Your %d * %d SQUARE SPIRAL Matrix Of\n",row, col);
    if(m%2==0)
    {   for(i=row-1; i>=0; i--)
        {   printf(" |  ");
            for(j=0; j<col; j++)
            {  printf("%d",M[i][j]);
               if(M[i][j]>9 || M[i][j]<0)
                {  printf(" ");  }
               else
                { printf("  ");  }
            }
            printf("| \n");
        }
    }
    else
    {   for(i=0; i<row; i++)
        {   printf(" |  ");
            for(j=col-1; j>=0; j--)
            {  printf("%d",M[i][j]);
               if(M[i][j]>9 || M[i][j]<0)
                {  printf(" ");  }
               else
                { printf("  ");  }
            }
            printf("| \n");
        }
    }
    DiagSum(row,col);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");     
} 

/*
// Without Generating Matrix, Diagonal have formula
#include<stdio.h>
#include<math.h>
void main()
{
    int n, i, m, sum=0;
    printf("\nEnter no of Rows and Columns of SQUARE Matrix :"); 
    scanf("%d",&n); 
    if(n%2 ==0) { m =1; }
    else { m=2; }
    for(i=1; i<= pow(n,2) ; i += m)
    {
        sum += i;
        //if it is perfect square 
        if(i !=1 && sqrt(i)== (int)sqrt(i))
          m+=2;
    }
    printf("\nThe required sum of elements of both the diagonals is: %d",sum);
}
*/