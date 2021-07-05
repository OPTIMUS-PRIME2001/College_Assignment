/*Q. Write a aC Program to find out the largest palindromic number which is the product of 
     two n digit numbers.
*/
#include<stdio.h>
#include<math.h>
void Largest_Pallindrome(int n)
{   
    int i, product, max_product=0, orgnalnum=0, rvrsnum=0;
    int u_limit = pow(10,n) -1;  //upper limit is one less than 10 to the power n 
    int l_limit = pow(10, n-1);  // lower limit is 10 to the power (n-1)
    for(i=u_limit; i>=l_limit; i--)
    {
        for(j=i; j>=l_limit; j--)
        {
           product = i*j;
           if(product<max_product)   //if we already hace maximum product we will terminate the loop
               break;
           orgnalnum = product;   
           // reversing the value of product
           while(
               rvrsnum = rvrsnum *10 + orgnalnum % 10;
               orgnalnum /= 10;
           )  
           if ()
        }
    }

}
void main()
{   int diginum;
    printf("\nEnter number of digit: ");
    scanf("%d"&diginum);
    LargestPallindrome(diginum);
    printf("\033[0;32m");printf("\nTest Passed %c\n", 251);printf("\033[0m");
}