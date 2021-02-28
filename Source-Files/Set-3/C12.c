//Program to find the sum of digits of a given number.

#include<stdio.h>

void main(){
    int sum = 0, n, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        sum += rem;
    }
    printf("Sum: %d\n", sum);
}