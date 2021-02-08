//Program to reverse four digit number.

#include<stdio.h>

void main(){

    int num, copy, rev, firstint, secondint, thirdint, fourthint;

    printf("Enter four digit number: ");
    scanf("%4d", &num);

    copy = num;

    fourthint = num % 10;
    num /= 10;

    thirdint = num % 10;
    num /= 10;

    secondint = num % 10;
    num /= 10;

    firstint = num % 10;

    rev = fourthint * 1000 + thirdint * 100 + secondint * 10 + firstint;

    printf("Reverse of %d = %d\n", copy, rev);
}