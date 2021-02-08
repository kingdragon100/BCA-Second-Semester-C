//Program to print the size of all primitive data types.

#include<stdio.h>

void main(){

    //1. Primary Data Type
    //a. Character Data Type
    printf("\nCharacter Data Type\n");
    printf("Size of char: %ld\n", sizeof(char));
    printf("Size of signed char: %ld\n", sizeof(signed char));
    printf("Size of unsigned char: %ld\n\n", sizeof(unsigned char));

    //b. Integer Data Type
    printf("Integer Data Type\n");
    printf("int\n");
    printf("Size of int: %ld\n", sizeof(int));
    printf("Size of signed int: %ld\n", sizeof(signed int));
    printf("Size of unsigned int: %ld\n", sizeof(unsigned int));
    
    printf("\nshort int\n");
    printf("Size of short int: %ld\n", sizeof(short int));
    printf("Size of signed short int: %ld\n", sizeof(signed short int));
    printf("Size of unsigned short int: %ld\n", sizeof(unsigned short int));

    printf("\nlong int\n");
    printf("Size of long int: %ld\n",sizeof(long int));
    printf("Size of signed long int: %ld\n", sizeof(signed long int));
    printf("Size of unsigned long int: %ld\n", sizeof(unsigned long int));

    //c. Floating Point
    printf("\nfloat and double\n");
    printf("Size of float: %ld\n", sizeof(float));
    printf("Size of double: %ld\n", sizeof(double));

    //d. void type
    printf("\nvoid\n");
    printf("Size of void: %ld\n", sizeof(void));
}