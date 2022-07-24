/*1]Pass two arguments and 1 is return value, Ask the input from the user 
2]Argument 1 can be byte value and argument 2 can be bit position in the byte value 
3]From that bit position can be left shifted with 1 and which can be stored in temperory variable as mask
4]Then byte value xor with temperory variable mask that can store in binary value.
5]That stored byte value can be store in another variable as result*/

#include<stdio.h> 
#include<stdlib.h> 
//Take two arguments and 1 is return value.
int flip_bits(int binval, int bitpos) 
{ 
//declare the variable as result.
int result; 
//From that bit position can be left shifted with 1 and which can be stored in temperory variable as mask
  int mask = (1<<bitpos);
//Then byte value xor with temperory variable mask that can store in binary value.
binval = binval^mask; 
//That stored byte value can be store in another variable as result.
result = binval; 
return result; 
} 
int main() 
{ 
         int binval, bitpos;
	 //Ask inputs binary value,bit position from the user. 
         printf("Enter binary value:\n"); 
         scanf("%x",&binval); 
         printf("Enter the bit pos:\n"); 
         scanf("%x",&bitpos); 
         int result = flip_bits(binval,bitpos); 
	 //print the result.
         printf("%x", result); 
} 
