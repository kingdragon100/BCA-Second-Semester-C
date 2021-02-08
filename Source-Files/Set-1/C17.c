//Program to read four different numbers and find the largest number.

#include<stdio.h>

void main(){

    int num1, num2, num3, num4, large;

    printf("Enter any four number: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    large = (num1 > num2 && num1 > num3 && num1 > num4) ? num1 : ((num2 > num3 && num2 > num4) ? num2 : (num3 > num4 ? num3 : num4));

    printf("Largest Number: %d\n", large);
} 