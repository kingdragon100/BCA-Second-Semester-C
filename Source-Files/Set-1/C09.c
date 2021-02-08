//Program to find the sum of three digit number.

#include<stdio.h>

void main(){
    int n, sum=0, firstint, secondint, thirdint, copy;
    printf("Enter Three Digit Number: ");
    scanf("%3d", &n);
    copy = n;

    thirdint = n % 10;
    n = n / 10;
    secondint = n % 10;
    n = n / 10;
    firstint = n % 10;
    sum = firstint + secondint + thirdint;

    printf("Sum of %d = %d\n",copy,sum);
}