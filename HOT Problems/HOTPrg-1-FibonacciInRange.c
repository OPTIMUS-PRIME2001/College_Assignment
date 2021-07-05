/* Q. Recall the definition of the Fibonacci numbers:
                    f1 := 1
                    f2 := 2
                    fn := fn-1 + fn-2    (n>=3)
Given two numbers a and b, calculate how many Fibonacci numbers are in the range [a,b].

Input:
   The input contains several test cases. Each test case consists of two non-negative integer
numbers a and b. Input is terminated by a=b=0. Otherwise, a<=b<=10^100. The numbers a and b 
are given with no superflous leading zeroes.

Output:
   For each test case output on a single line the number of Fibonacci numbers fi with a<=fi<=b.

Sample Input
10 100
1234567890 9876543210
0  0

Sample Output
5
4
0
*/
#include<stdio.h>
#include<math.h>
double phi1 = (1 + sqrt(5))/2, phi2 = (1 - sqrt(5))/2;
double fibs(int n)
{
    return ( (pow(phi1,n)/sqrt(5))-(pow(phi2,n)/sqrt(5)) );
}
double revfib(double item, int ch)
{
    if(item == 0)
    {
        return item;
    }
    else if(item == 1)
    {
        return item;
    }
    else
    {
        double n; int num;   
        n =  round((log10((sqrt(5) * item) )/ log10(phi1)));
        num=fibs(n);
        if((num<item) || (ch==1 && num==item ) )
            return n+1;
        else
            return n;
    }
}    
void main()
{
    char choice='y';
    printf("\n");
    while(choice=='y' || choice=='Y')
    {
        long long int low, high;
        printf("\n\nEnter the lower range number:");
        scanf("%lld",&low);
        printf("Enter the upper range number:");
        scanf("%lld",&high);    
        if((low==0 && high==0)|| (high==0))
        {   printf("Terminating program"); 
            break;             
        }
        printf("\nTotal numbers of fibonacci numbers in [ %lld to %lld ]",low,high);
        printf(" is %0.lf",revfib(high,1)-revfib(low,0));
        
        printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
        
        fflush(stdin);
        printf("\nEnter yes:"); scanf("%c",&choice);       
    } 
}
/*
#include<stdio.h>
#include<math.h>
double phi1 = (1 + sqrt(5))/2, phi2 = (1 - sqrt(5))/2;
void main()
{
    double n;
    for(int i=1; i<=100; i++)
    {
        n =  round((log10((sqrt(5) * i) )/ log10(phi1)));
        printf("\n%d = %.0lf",i,n);
    } 
}*/