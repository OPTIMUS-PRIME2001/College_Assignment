/*print the sizes and range of datatypes*/
#include<stdio.h>
#include<math.h>
#include<float.h>
int main(){
      int num,range;
      printf("the size of char in my pc is =%d bytes\n",sizeof(char));
      range=(int) pow(2,8*sizeof(char)-1);
      printf("the range for unsigned char is from %u to %u\n",0,(2*range)-1);
      printf("the range for signed char is from %d to %d\n\n",-range,range-1);   
      printf("the size of int in my pc is =%d bytes\n",sizeof(int));
      range=(int) pow(2,8*sizeof(int)-1);
      printf("the range for unsigned int is from %u to %u\n",0,(2*range)-1);
      printf("the range for signed int is from %d to %d\n\n",-range,range-1);  
      printf("the size of  short int in my pc is =%d bytes\n",sizeof( short int));
      range=(int) pow(2,8*sizeof( short int)-1);
      printf("the range for unsigned short int is from %hu to %hu\n",0,(2*range)-1);
      printf("the range for signed  short int is from %hd to %hd\n\n",-range,range-1);      
      printf("the size of float in my pc is =%d bytes\n",sizeof(float));
      printf("the range for float is from %.10e to %.10e\n\n", FLT_MIN,FLT_MAX);       
      printf("the size of double in my pc is =%d bytes\n",sizeof(double));
      printf("the range for double is from %.10e to %.10e\n\n", DBL_MIN, DBL_MAX);
    
    

    return 0;
}


