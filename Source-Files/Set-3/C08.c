//Program to find the sum of square of first ‘n’ natural numbers. (using all loops)

#include<stdio.h>

void main(){
    int count, sum = 0, i = 1;
    printf("Enter 'n' no: ");
    scanf("%d", &count);
    for (i = 1; i <= count; i++)
    {
        sum += i * i;
    }
    printf("Sum (using for loop): %d\n", sum);
    while(i <= count)
    {
        sum += i * i;
        i++;
    }
    printf("Sum (using while loop): %d\n", sum);
    do
    {
        sum += i * i;
        i++;
    } while (i <= count);
    printf("Sum (using do while loop): %d\n", sum);
}