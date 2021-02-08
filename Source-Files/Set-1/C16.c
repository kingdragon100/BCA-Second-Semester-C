//Program to read three different numbers and find the smallest one.

#include<stdio.h>

void main(){

    int num1, num2, num3, small;
    printf("Enter any three number: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    small = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

    printf("Smallest Number among %d, %d, %d is %d\n", num1, num2, num3, small);
}