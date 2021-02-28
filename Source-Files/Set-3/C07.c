//Program to find sum of first ‘n’ natural numbers.

#include<stdio.h>

void main(){
    int sum = 0, count;
    printf("Enter n number: ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++)
    {
        sum += i;
    }
    printf("Sum = %d\n", sum);
    
}