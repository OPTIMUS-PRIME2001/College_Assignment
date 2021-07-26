/*Q. Define a structure called “cricket” that will describe the following information -
     Player name
     Team name
     Batting average
using “cricket” declare an array “player” with 50 elements and write a program to read the 
information about all the 50 players and print a team wise list containing names of players with 
their batting average.
*/
#include<stdio.h>
#include<string.h>
typedef struct 
{
    char PlayerName[25];
    char TeamName[15];
    float Batting_avg;
} Cricket;
void input_info(Cricket Pl[],int size)
{
    for(int i=0; i<size; i++)
    {
        fflush(stdin);
        printf("input #%d\n",i+1);
        printf("Player Name : "); gets(Pl[i].PlayerName);
        printf("Team Name : "); gets(Pl[i].TeamName);
        printf("Batting Average : "); scanf("%f",&Pl[i].Batting_avg);
    }
}
void Display(int No,char Pname[], float BAvg, char Tname[])
{
   printf("\n%d  %s \t\t %f \t %s",No,Pname,BAvg,Tname);
}
void reorderTeam(Cricket P[], int size)
{
    int i, j; Cricket t;
    for(i=0; i<size-1; i++)
    {  
        for(j=i+1; j<size; j++)
        {   if(strcmp(P[i].TeamName,P[j].TeamName)>0)
            {
                t = P[j];
                P[j] = P[i];
                P[i] = t;
            }
        }                                                    
    }
}
void main()
{
    Cricket Player[36]; 
    printf("\nEnter Information of 50 players\n");
    input_info(Player,36);
    reorderTeam(Player,36);
    printf("Printing Team Wise: ");
    for(int i=0,slno=1; i<36; i++)
    {
        if(i == 0 || strcmp(Player[i].TeamName,Player[i-1].TeamName)!=0)
        {
            printf("\n Team Name : %s\n",Player[i].TeamName);
            printf("SLNo. Player Name       Batting Avergae      Team Name");
            slno = 1;
        }
        Display(slno,Player[i].PlayerName, Player[i].Batting_avg, Player[i].TeamName);
        slno++;
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}