//Q. Write a C Program to print the sizes and range of various data types.
/*#include<stdio.h>
#include<limits.h>
#include<float.h>
void main()
{   printf("\nDatatype\t\tSize\t\tRange\n\t\t\t\t    From\t  To");
    printf("\nsigned char: ");
    printf("\t\t%zu byte",sizeof(char));
    printf("\t   %d \t  %d\n", CHAR_MIN, CHAR_MAX);

    printf("unsigned char: ");
    printf("\t\t%zu bytes",sizeof(unsigned char));
    printf("\t    %d\t\t  %d\n", 0, UCHAR_MAX);

    printf("signed Short int: ");
    printf("\t%zu bytes",sizeof(short int));
    printf("\t   %d \t  %d\n", SHRT_MIN, SHRT_MAX);

    printf("unsigned Short int: ");
    printf("\t%zu bytes",sizeof(short int));
    printf("\t    %d\t\t  %d\n", 0, USHRT_MAX);

    printf("signed int: ");
    printf("\t\t%zu bytes",sizeof(int));
    printf("\t   %d \t  %d\n", INT_MIN, INT_MAX);
    
    printf("unsigned int: ");
    printf("\t\t%zu bytes",sizeof(unsigned int));
    printf("\t    %d \t\t  %lu\n", 0, UINT_MAX);

    printf("float: ");
    printf("\t\t\t%zu bytes",sizeof(float));
    printf("\t   %e  %e\n", FLT_MIN, FLT_MAX);

    printf("signed Long int: ");
    printf("\t%zu bytes",sizeof(long int));
    printf("\t   %ld \t  %ld\n", LONG_MIN, LONG_MAX);

    printf("unsigned Long int: ");
    printf("\t%zu bytes",sizeof(long int));
    printf("\t    %d\t\t  %lu\n", 0, ULONG_MAX);

    printf("signed Long Long int: ");
    printf("\t%zu bytes",sizeof(long long int));
    printf("\t   %lld \t  %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);

    printf("unsigned Long Long int: ");
    printf("%zu bytes",sizeof(long long int));
    printf("\t    %d\t\t  %llu\n", 0, ULONG_LONG_MAX);

    printf("double: "); 
    printf("\t\t%zu bytes",sizeof(double));
    printf("\t   %e  %e\n", DBL_MIN, DBL_MAX);

    printf("\033[0;32m");printf("\n\nTest Passed %c\n",251);printf("\033[0m");
}
*/
#include<stdio.h>
#include<math.h>
#include<float.h>
void main()
{  int n;
    printf("\nDatatype\t\tSize\t\tRange\n\t\t\t\t    From\t  To");
    printf("\nsigned char: ");
    printf("\t\t%zu byte",sizeof(char)); 
    n=8*sizeof(char);
    printf("\t   -%d \t  %d\n", pow(2,n-1), pow(2,n-1)-1);

    printf("unsigned char: ");
    printf("\t\t%zu bytes",sizeof(unsigned char));
    n=8*sizeof(unsigned char);
    printf("\t    %d\t\t  %d\n", 0, pow(2,n)-1);

    printf("signed Short int: ");
    printf("\t%zu bytes",sizeof(short int));
    n=8*sizeof(short int);
    printf("\t   -%d \t  %d\n", pow(2,n-1), pow(2,n-1)-1);

    printf("unsigned Short int: ");
    printf("\t%zu bytes",sizeof(short int));
    n=8*sizeof(short int);
    printf("\t    %d\t\t  %d\n", 0, pow(2,n)-1);

    printf("signed int: ");
    printf("\t\t%zu bytes",sizeof(int));
    n=8*sizeof(int);
    printf("\t   -%d \t  %d\n", pow(2,n-1), pow(2,n-1)-1);
    
    printf("unsigned int: ");
    printf("\t\t%zu bytes",sizeof(unsigned int));
    n=8*sizeof(unsigned int);
    printf("\t    %d \t\t  %lu\n", 0, pow(2,n)-1);

    printf("float: ");
    printf("\t\t\t%zu bytes",sizeof(float));
    n=8*sizeof(float);
    printf("\t   -%e  %e\n", pow(2,n-1), pow(2,n-1)-1);

    printf("signed Long int: ");
    printf("\t%zu bytes",sizeof(long int));
    n=8*sizeof(long int);
    printf("\t   -%ld \t  %ld\n", pow(2,n-1), pow(2,n-1)-1);

    printf("unsigned Long int: ");
    printf("\t%zu bytes",sizeof(long int));
    n=8*sizeof(long int);
    printf("\t    %d\t\t  %lu\n", 0, pow(2,n)-1);

    printf("signed Long Long int: ");
    printf("\t%zu bytes",sizeof(long long int));
    n=8*sizeof(long long int);
    printf("\t   -%lld \t  %lld\n", pow(2,n-1), pow(2,n-1)-1);

    printf("unsigned Long Long int: ");
    printf("%zu bytes",sizeof(long long int));
    n=8*sizeof(long long int);
    printf("\t    %d\t\t  %llu\n", 0, pow(2,n)-1);

    printf("double: "); 
    printf("\t\t%zu bytes",sizeof(double));
    n=8*sizeof(double);
    printf("\t   -%e  %e\n", pow(2,n-1), pow(2,n-1)-1);

    printf("\033[0;32m");printf("\n\nTest Passed %c\n",251);printf("\033[0m");
}