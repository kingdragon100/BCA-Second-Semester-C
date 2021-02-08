//Program to generate first ‘n’ even terms and find their sum also.

#include<stdio.h>

void main(){
    int sum = 0, even = 0, count;
    printf("Enter 'n' number: ");
    scanf("%d", &count);

    for (int i = 0; i <= count; i++)
    {
        printf("%2d. %d\n", i, even);
        sum += even;
        even += 2;
    }
    printf("\nSum of even number: %d\n", sum);
    
}