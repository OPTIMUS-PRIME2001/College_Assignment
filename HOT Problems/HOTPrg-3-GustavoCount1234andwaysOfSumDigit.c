/*Q. Gustavo knows how to count, but he is just learning how to write numbers. He has already 
     learmed the digits 1,2,3 and 4. But he does not yet realize that 4 is different than 1,
     so he thinks that 4 is just another way to write 1.
     He thinks fun with a little game he created: he makes numbers with the four digits that 
     he knows and sums their values.Foe example:
     132 = 1+ 3+ 2 = 6
     1122314 = 1+ 1+ 2+ 2+ 3+ 1+ 1 = 9 (remember that gustavo thinks that 4 = 1)  
     Gustavo now wants to know how many such numbers he can create whose sum is a number n.
     For n=2, he can make 5 numbers :2, 11, 14, 41, and  44.(He knows how to count up beyond 
     five , just not how to write it.) However, he can't figure out this sum for n greater 
     than 2 , and ask for your help.
Input:
    Input will consists of an arbitary numbers of integers n such that 1<=n<=1000. You must 
    read until you reach the end of file.
Output:
    For each integer read, output an single integer on a line stating how many numbers Gustavo 
    can make such that the sum of their digits is equal to n.

    Sample Input              Sample Output
         1                          2
         2                          5   
         3                          13
         4                          33      
*/
/*
#include<stdio.h>
unsigned long long int way[1000];
// Recursive function to print all numbers whose sum of digits equals to given sum
void nextdigits(int ndigi, int sum, char *out, int index)
{  
    static int count=1;
    //Base case if sum<0 and index>no of digits
    if(index>ndigi || sum<0)
        return;

    if(index == ndigi)    
    {
        // if sum of its digits is equal to given sum, print it
        if(sum==0)
        {
            out[index]='\0';
            if(count<10)
                printf(" ");
            printf(" %d \t%s\n",count,out);
            count++;
        }
        return;
    }
    // Traverse through every digit 1,2,3,4. Note that  here we're considering 4 as 1.
    for (int i = 1; i <= 4; i++)
    {
        // append current digit to number
        out[index] = i + '0';
        if(i==4)            // recurse for next digit with reduced sum
            nextdigits(ndigi, sum - 1, out, index + 1); 
        else
            nextdigits(ndigi, sum - i, out, index + 1);
    }
}
void ShowWay(int s,int w)
{   
    // output array to store N-digit numbers
    char out[s + 1];
    // fill 1st position by every digit from 1 to 4 and
    for(int i=1; i<=s; i++)
    {
        for(int j=1; j<=4 ; j++)
        {
            out[0] = j + '0';
            if(j==4)
                nextdigits(i, s-1, out, 1);
            else
                nextdigits(i, s-j, out, 1);            
        }
    }
}
void Ways(int s)
{  
    way[0] = 0; way[1] = 2; way[2] = 5; way[3] = 13; //INITIALIZATION
    int temp; static int ctrl=4;
    for(int i=ctrl; i<=s; i++)
    {
       temp = 2 * way[i-1];   // way[i-1] + way[i-1];
       temp += way[i-2];
       temp += way[i-3];
       way[i] = temp;
    }
    ctrl = s;
}
void main()
{
    int sum; char want;
    
    printf("\nEnter the sum of the digits:");
    scanf("%d",&sum);
    if(sum>0)
    {
        Ways(sum);
        printf("Total number of ways of getting the sum you enter, using '1', '2', '3', '4'");
        printf("\nwhere treating digit '4' as '1' are: %llu", way[sum]); 
        fflush(stdin);
        printf("\nDo you want to see all the ways. If yes( 'y' or 'Y'):");
        scanf("%c",&want);
        if(want == 'y')
        {
            printf("SL.No   Numbers\n");
            ShowWay(sum,way[sum]);
        }
    }
    else
    {
        printf("Gustavo Cannot write any number for sum = 0");
    }    
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");     
}
*/
#include<stdio.h>
#include"LargeDatatype.h"
void Ways(int s)
{  
    Node *start_a = NULL, *start_b = NULL, *start_c = NULL, *result;
    INITIALIZE(13, newptr_a, &start_a,1);
    INITIALIZE(5, newptr_b, &start_b,2);
    INITIALIZE(2, newptr_c, &start_c,3);
    if(s==1)
        result = start_c;
    else if(s==2)
        result = start_b;
    else if(s==3)
        result = start_a;
    static int ctrl=4;          
        for(int i=ctrl; i<=s; i++)
        {
            result = ADD(start_a, start_a);
            result = ADD(result, start_b);
            result = ADD(result, start_c);
            ListCpy(&start_c,start_b);       
            ListCpy(&start_b,start_a);
            ListCpy(&start_a,result);
        }
        ctrl = s;
    Display(result);     
}
void main()
{
    int sum; char want;
    
    printf("\nEnter the sum of the digits:");
    scanf("%d",&sum);
    if(sum>0)
    {
        printf("Total number of ways of getting the sum you enter, using '1', '2', '3', '4'");
        printf("\nwhere treating digit '4' as '1' are:");
        Ways(sum); 
    }
    else
    {
        printf("Gustavo Cannot write any number for sum = 0");
    }    
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");     
}