//Program to find sum of first ‘n’ natural numbers.

#include<stdio.h>

void main(){
    int sum = 0, count;
    printf("Enter n number: ");
    scanf("%d", &count);

    for (int i = 0; i <= count; i++)
    {
        printf("%2d\n",i);
        sum += i;
    }
    printf("\nSum = %d\n", sum);
    
}