//Program to demonstrate the use of arithmetic operation on integers.

#include<stdio.h>

void main(){
    int num1, num2, sum, difference, product, quotient, remainder;

    //For Sum
    printf("Enter any two number(Sum): ");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;

    //For Difference
    printf("Enter any two number(Difference): ");
    scanf("%d%d", &num1, &num2);
    difference = num1 - num2;

    //For Product
    printf("Enter any two number(Product): ");
    scanf("%d%d", &num1, &num2);
    product = num1 * num2;

    //For Quotient
    printf("Enter any two number(Quotient): ");
    scanf("%d%d", &num1, &num2);
    quotient = num1 / num2;

    //For Remainder
    printf("Enter any two number(Remainder): ");
    scanf("%d%d", &num1, &num2);
    remainder = num1 % num2;

    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d\nRemainder = %d\n", sum, difference, product, quotient, remainder);
}