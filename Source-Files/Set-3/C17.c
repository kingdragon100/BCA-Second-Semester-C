//Program to display the first ‘n’ terms of Fibonacci series.

#include<stdio.h>

void main(){
    int num1 = 1, num2 = 1, keep = num1, count;
    printf("Enter 'n' number: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("%5d", num2);
        num1 = num2;
        num2 = keep;
        keep = num1 + num2;
    }
    printf("\n");
}