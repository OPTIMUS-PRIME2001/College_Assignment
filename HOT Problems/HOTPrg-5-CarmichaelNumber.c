/*Q. Randomized primality tests exist that offer a high degree of confidence of accurate 
     determination at low cost, such as the Fermat test. Let a be a random numbers between 
     2 and n-1, where n is the number whose primality we are testing. Then, n is probably
     prime if the following equation holds:
                                a^n mod n = a
    If a number passes the Fermat test several times, then it is prime with a high probability.
    Unfortunately, there is a bad news. Certain composite numbers (non-primes) still pass the
    Fermat test with every number smaller than themselves.These number are called Carmichael
    numbers.
    Write a Programs to test whether a given integer is a Carmichael number.
Input:
    The input will consist of a series of lines, each containing a small positive number n
    (2<n<65,000). A number n=0 will mark the end of the input, and must not be processed.

Output:
    For each number in the input, print whether it is a Carmichael number or not as shown in 
    the sample output.

    Sample Input                  Sample Output
       1729                      The number 1729 is a Carmichael number.
       17                        17 is normal.
       561                       The number 561 is a Carmichael number.
       1109                      1109 is normal.
       431                       431 is normal.
       0
Carmichael Sequence: 561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 
                     46657, 52633, 62745, 63973, 75361, 101101, 115921, 126217, 162401, 
                     172081, 188461, 252601, 278545, 294409, 314821, 334153, 340561, 399001, 
                     410041, 449065, 488881, 512461       
*/
#include<stdio.h>
#include<math.h>
int checkcarmichael(int n)
{
    int count=0, decision=1, original;
    original=n;
    if(n%2 == 0)
    {   
        while(n%2 == 0)
        {   n = n/2; }
        printf("2 ");    
        ++count;
        if(n!=1)
            printf(" x ");
    }
    // n must be odd at this point.So we can skip one element (Note i = i +2)
    for(int i=3; i<=sqrt(original); i=i+2)
    {
        if(n%i==0)
        {           
            if(((original-1)%(i-1)) == 0)
            {
                printf("%d ",i);
                while(n%i==0)
                    n = n/i;    
                ++count;
                if(n!=1)
                    printf(" x ");   
            }
            else
                decision = 0;                
        }                  
    }
    if(count>=3)
        return decision;
    else
    {
        decision = 0;
        return decision;
    }    
}
void main()
{
    int num, des;
    printf("\nCHEKING FOR CARMICHAEL NUMBER\n");
    do
    {
        printf("\nEnter a Number to check: ");
        scanf("%d",&num);
        printf("%d = ",num);
        des = checkcarmichael(num);
        if(des == 1)
            printf("\nThe number %d is a Carmichael number",num);    
        else
            printf("\n%d is normal",num);
    
    } while(num!=0);
}
/*
#include <stdio.h>
#include<math.h>

int greatest_Common_divisor(int a, int b)
{
    if(a==0)
        return b;
    return greatest_Common_divisor(b%a,a);
}
 

int be(int a,int b,int m) {
    if(b==0) 
        return 1;
    if(b==1) 
        return a%m;
    
    long long t=be(a,b/2,m);
    long long r=(t*t)%m;
    if(b&1) 
    {
        r=(r*a)%m;
    }
    return (int)r;
}
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    
    int n;
    while(scanf("%d",&n))
    {
        
        if(!n)
            break;
        if(prime(n))
            printf("%d is normal\n",n);
        else
        {
            int c=1,i;
            for(i=2;i<n;i++)
            {
                if(greatest_Common_divisor(i,n)==1)
                {
                    
                    int s=be(i,n-1,n);
                    if(s!=1)
                        c=0;
                }
            }
          
            if(!c)
                printf("%d is normal\n",n);
            else
                printf("%d is Carmichael Number\n",n);
        }
    }
}
*/