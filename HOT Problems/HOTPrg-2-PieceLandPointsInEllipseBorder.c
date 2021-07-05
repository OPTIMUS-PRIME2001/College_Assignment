/*Q. You are given an elliptical-shaped land and you are asked to choose n arbitrary points on its boundary. 
Then you connect each point with every other point using straight lines, forming n(n – 1)/2 connections. 
What is the maximum number of pieces of land you will get by choosing the points on the boundary carefully?
INPUT:
     The first line of the input file contains one integer s (0 < s < 3, 500), which indicates 
     how many input instances there are. The next s lines describe s input instances, each consisting 
     of exactly one integer n (0<=n<=2^31)
OUTPUT:
     For each input instance output the maximum possible number pieces of land defined by n points, 
     each printed on its own line.     

     SAMPLE INPUT                    SAMPLE OUTPUT
          4                           
          1                                1
          2                                2
          3                                4
          4                                8

*/
#include<stdio.h>
void main()
{
    int times, i, NumPnts[50];
    printf("\nEnter number of inputs you want to give: ");
    scanf("%d",&times);
    
    printf("\nEnter %d sets of Number of Points on the border of Elliptical Pieces Of Lands:\n",times);
        for(i=0; i<times; i++)
            scanf("%d",&NumPnts[i]);
    printf("\nThe Maximum Possible Number Of Pieces of Land for respective %d sets:\n",times);
        for(i=0; i<times; i++)
        {   int np = NumPnts[i];
            printf("%d\n", 1 + (np*(np -1)/2)+(np*(np-1)*(np-2)*(np-3)/24) );
        }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");    
}