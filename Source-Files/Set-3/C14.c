//Program to check whether given number is prime or not.

#include<stdio.h>

void main(){
    int i, count;
    printf("Enter a number: ");
    scanf("%d", &count);

    for (i = 2; i < count; i++)
    {
        if (count % i == 0)
        {
            printf("%d not Prime.\n", count);
            break;
        }
    }
    if (i == count)
    {
        printf("%d is Prime\n", count);
    }
}