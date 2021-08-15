/*Q. Write a nested macro that gives the minimum of three values
*/
#include<stdio.h> 
#define min(a,b) ((a>b)?b:a) 
#define minthree(a,b,c) (min(min(a,b),c)) 
void main() 
{ 
    int n1, n2, n3, min_v; 
    printf("Enter three numbers :\n"); 
    scanf("%d %d %d",&n1,&n2,&n3); 
    min_v=minthree(n1,n2,n3); 
    printf("Minimum of three value is %d",min_v); 
}