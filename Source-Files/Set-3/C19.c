/*Write a program to display the following output:
A B C D E F G H I J */

#include<stdio.h>

void main(){

    for (int i = 65; i <= 74; i++)
    {
        printf("%2c", i);
    }
    printf("\n");
}