//Program to display the first 10 terms of series 1, 5, 9, ...

#include<stdio.h>

void main(){
    int series = 1;
    for (int i = 1; i < 10; i++)
    {
        printf("%3d,", series);
        series += 4;
    }
    printf("\n");
}