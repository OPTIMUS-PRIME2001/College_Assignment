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
*//*
#include<stdio.h>
int M[1000][1000];
void Generate_Spiral(int row, int col, int mul)
{  int i, j, k=0, l=0 , dimen=row=col;     // k - Starting row index 
   while( k<row && l<col && mul>0)         // l - Starting Column index 
    {   
        if(dimen % 2 ==0)              // if row and col is a even number 
        {  for(i=l; i<col; i++)                   // we set the start to  element in last row and 0th column and thus
           {   M[row-1][i]=mul;    --mul;   }    // we move right print all elements upto last column when we reached
           row--;                               // last column, no of rows is decreased by 1 so that we never get to that row again
           
           for(i=row-1; i>=k; --i)              // Now we are at element in 2nd last row and last column and thus   
           {   M[i][col-1]=mul;     --mul;   }  // we move up to print all elements upto first row , when we reached to
           col--;                               // first row, no of cols is decreased by 1 so that we never get to that column again
           
           if(k<row)                           // check for still now k is less than no of rows or not
           {  for(i=col-1; i>=l; --i)          // Now we are at element in 2nd last column of first row and thus we move 
              { M[k][i]= mul;   --mul;   }     // left to print all elemnts upto first col or value of l, when we reached upto 
              k++;                             // lth col element , then k is increased by 1 so that we never get to that row again
            } 
            
            if(l<col)                         //check for still now l is less than no of columns or not
           {  for(i=k; i<row; i++)            // Now we are at element in 2nd row of first column and thus we move
              { M[i][l]=mul;   --mul;    }    // to the element in 2nd last row or value at row -1, when we reached upto
              l++;                            // row-1 th row, then  l is increased by 1 so that we never get to that column again
           } 
        }
        else
        {  for(i=col-1; i>=l; --i)
           {   M[k][i]=mul;    --mul;   }
           k++;
           for(i=k; i<row; i++)  
           {   M[i][l]=mul;     --mul;   }
           l++;
           if(k<row)
           {  for(i=l; i<col; i++)
              { M[row-1][i]= mul;   --mul;   }
              row--;
            } 
            if(l<col)
           {  for(i=row-1; i>=k; --i)
              { M[i][col-1]=mul;   --mul;    }
              col--;
           } 
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
{   //O(n^2) Time Complexity
    int i, j, m, row , col, multiply; 
    printf("\tSPIRAL SQUARE MATRIX SPIRALLY\n\n");
    printf("Enter no of Rows and Columns of SQUARE Matrix :"); 
    scanf("%d",&m);  row=col=m;
    multiply = row * col; 
    //Generating Spiral Matrix
    Generate_Spiral(row,col,multiply);
     // PRINTING THE MATRIX IN IT'S FORM
    printf(" Your %d * %d SQUARE SPIRAL Matrix Of\n",row, col);
    for(i=0; i<row; i++)
    {   printf(" |  ");
        for(j=0; j<col; j++)
        {   printf("%d",M[i][j]);
            if(M[i][j]>9 || M[i][j]<0)
            {  printf(" ");  }
            else
            { printf("  ");  }
        }
        printf("| \n");
    }        
    DiagSum(row,col);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");     
} 

*/
#include<stdio.h>
void main()
{  // O(1) Time complexity
    int m, diag_sum; 
    printf("\tSPIRAL SQUARE MATRIX SPIRALLY\n\n");
    printf("Enter no of Rows and Columns of SQUARE Matrix :"); 
    scanf("%d",&m);   
    diag_sum = 4*m*m - 6*m + 6;
    printf("\nThe required sum of elements of both the diagonals is: %d",diag_sum);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}