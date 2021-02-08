//Program to find sum of cube of first 10 natural numbers.

#include<stdio.h>

void main(){
    int sum = 0;
    
    for (int i = 1; i <= 10; i++)
    {
        sum += i * i * i;
    }
    printf("Sum: %d\n", sum);
    
}