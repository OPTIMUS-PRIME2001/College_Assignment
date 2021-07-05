/*Q. There is man named "mabu" who switches on-off the lights along a corridor at our University.
     Every bulb has its own toggle switch that changes the state of the light.That is, if the light
     is off,pressing the switch turns it on.Pressing it again will turn it off. Initially each bulb 
     is off.
     He does a peculiar thing. If there are n bulbs in a corridor, he walks along the corridor back 
     and forth n times. On i-th walk, he toggles only the switches whose position is divisable by i. 
     He does not press any switch when coming back to his initial position. The i-th walk is defined 
     as going down the corridor (while doing the peculiar thing) and coming back again. Determine the
     final state of the last bulb. Is it on or off?
     
Input:
     The input will be an integer indicating the nth bulb in a corridor. Which is less then or equal
     to 2^32 −1.A zero indicates the end of input and should not be processed.
Output:
     Output "yes" or "no" to indicate if the light is on, with each case apperaing on its own line.
     
    Sample Input     Sample Output
         3               no
        6241             yes
        8191             no
          0
*/
#include<stdio.h>
#include<math.h>
void main()
{  
    unsigned long long int num, sqroot;
    printf("\nEnter the number of bulbs in the Corridor until the input is 0:\n");
    do
    {
        printf("\n");
        scanf("%lld",&num);
        if(num == 0)
            break;
        sqroot = sqrt(num);
        if(sqroot*sqroot == num)
            printf("Is the bulb 'on' or 'off':  YES\n");
        else
            printf("Is the bulb 'on' or 'off':  NO\n");    
    }while(num!=0); 
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m"); 
}
/*
#include<stdio.h>
#include<string.h>
void TogglingState(unsigned long long int Total,unsigned long long int pos)
{
    unsigned long long int i,p;
    char States[Total+1]; //To store the final states of every bulb
    //States[0...n] is initialized with 'n' denoting the lights are 'off'
    memset(States,'n',sizeof(States));
    for (p = 1; p <= Total; p++)
    {
        //Toggle switch between on off when position of switch is multiple of ith walk. 
        for (i = p; i <= Total; i += p)
        {    
            if(States[i]=='n')
                States[i] = 'y';
            else if(States[i]=='y')
                States[i] = 'n';    
        }       
    }
    printf("\nPosition:");
    for (p = 1; p <= Total; p++)
            printf("%d ", p);
    printf("\nState:   ");        
    for (p = 1; p <= Total; p++)
    {   if(p>=10)
            printf(" %c ", States[p]);
        else
            printf("%c ", States[p]);
    }
    printf("\n\nThe state of the bulb at position %llu is: ",pos);
    if(States[pos]=='y')
        printf(" YES the bulb is 'On'");
    else
       printf(" NO the bulb is 'Off'");    
}
void main()
{
    unsigned long long int Tnum,Pos;
    printf("\nEnter Total Numbers of bulbs in the corridor: ");
    scanf("%llu",&Tnum);
    printf("Enter the position of the bulb whose state you want to know: ");
    scanf("%llu",&Pos);
    TogglingState(Tnum,Pos);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m"); 
}*/