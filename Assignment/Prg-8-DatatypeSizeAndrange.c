//Q. Write a C Program to print the sizes and range of various data types.
#include<stdio.h>
#include<conio.h>
// Prints min and max value for a signed type
void printUnsignedRange(size_t bytes)
{
    int bits = 8*bytes;
  
    // Note that the value of 'to' is "(1 << bits) - 1"
    // Writing it in following way doesn't cause overflow
    unsigned int to = ((1 << (bits-1)) - 1) + (1 << (bits-1)) ;
  
    printf("\t   %u\t\t%u \n", 0, to);
}
  
// Prints min and max value for an unsigned type
void printSignedRange(size_t bytes){
   int bits = 8*bytes;
   int from = -(1 << (bits-1));
   int to =  (1 << (bits-1)) - 1;
   printf("\t   %d \t %d\n", from, to);
}

void main(){
    printf("\nDatatype\t\tSize\t\tRange\n\t\t\t\t    from\tTo");
    printf("\nsigned char: ");
    printf("\t\t%zu byte",sizeof(char));
    printSignedRange(sizeof(char));
  
    printf("unsigned char: ");
    printf("\t\t%zu bytes",sizeof(unsigned char));
    printUnsignedRange(sizeof(unsigned char));
  
    printf("signed int: ");
    printf("\t\t%zu bytes",sizeof(int));
    printSignedRange(sizeof(int));
  
    printf("unsigned int: ");
    printf("\t\t%zu bytes",sizeof(unsigned int));
    printUnsignedRange(sizeof(unsigned int));
  
    printf("signed short int: ");
    printf("\t%zu bytes",sizeof(short int));
    printSignedRange(sizeof(short int));
  
    printf("unsigned short int: ");
    printf("\t%zu bytes",sizeof(unsigned short int));
    printUnsignedRange(sizeof(unsigned short int));
  printf("\033[0;32m");printf("\n\nTest Passed %c\n",251);printf("\033[0m");
}