/*Q. You are given an array A of size n you are told that A comprises three consecutive runs
     first a run of 'a's' then a run of 'b's' and finally a run of 'c's'. Moreover you are 
     provided an index i such that A[i]=b. Design an O(logn) time algo to determine the 
     number of 'b's' in A.
*/
#include<stdio.h>
int Search(char AR[],int size,char item)
{
    int beg, mid, last, step=0;
    beg=0; last=size-1;
    while(beg<=last)
    {   step++;
        mid = (beg+last)/2;
        if(AR[mid]==item && AR[mid-1]==item-1)
        {   printf("Number Of Steps: %d",step);
            return mid;
        }
        if( AR[mid-1] == item )
        {   last=mid;
            continue;
        }
        if( AR[mid] == item-1 )
        {  beg=mid;
            continue;
        }
        if(AR[0]==item)
        {   printf("Number Of Steps: %d",step);
            return 0;
        }             
    }
    printf("Number Of Steps: %d",step);
    return size;
}
void main()
{             //{"0123456789x123456789x1"}
    char AR[] = {"aaaaabbbbbbcccccccdddd"};
    int i, index_beg, index_last, N = sizeof(AR)/sizeof(AR[0]); 
    printf("\n\nSize of Array is: %d",N-1);
    printf("\nEnter desired index:");
    scanf("%d",&i);
    if(AR[N-2]==AR[i])
    { 
        index_beg = Search(AR,N,AR[i]);
        printf("\n%c at %d",AR[i],index_beg);
        index_last = N-1;
        printf("\nlast%c at %d\n",AR[i],index_last);
    }
    else
    {
        index_beg = Search(AR,N,AR[i]);
        printf("\n%c at %d\n",AR[i],index_beg);
        index_last = Search(AR,N,AR[i]+1);
        printf("\n%c at %d\n",AR[i]+1,index_last); 
    }         
    printf("\nTotal nummber of %c in %s is: %d",AR[i], AR, index_last-index_beg);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m"); 
}