/*Q. Write A C Program that will receive a file name and a line of text as command line arguments 
and write the text to the file.
*/
#include<stdio.h>
#include<time.h>
//arg_no :
//argName :
//command = V:\Coding_Drive\Ms VS.Coding Languages\C Language Programs\Assignment
//.exe name = Prg-61-WriteTextFile-UsingCommandLineArg.exe ,file name = Prg-61-demofile.txt
//syntax : Prg-61-WriteTextFile-UsingCommandLineArg.exe Prg-61-demofile.txt <TEXT>
int main(int arg_no , char *argText[])
{
    if(arg_no==1)
    {
        printf("MISSING: FILE NAME AND TEXT TO BE APPENDED IN THE FILE !\n");
        printf("COMMAND SYNTAX: main.exe <file_Name> <Text>");
        return 0;
    }
    else if(arg_no==2)
    {
        printf("MISSING: TEXT TO BE APPENDED IN THE FILE !\n");
        printf("COMMAND SYNTAX: main.exe <file_Name> <Text>");
        return 0;
    }
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    FILE *fp = fopen(argText[1],"a+");
    if(fp==NULL)
    {
        printf("ERROR!");  
        return 0;
    }
    fprintf(fp,"\nNote On : %s",asctime(tm));
    fprintf(fp,"%s\n",argText[2]);
    printf("Successfully Text Appended in %s",argText[1]);
    fclose(fp);
    return 0;
}