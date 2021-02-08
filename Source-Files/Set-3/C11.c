//Program to find the factorial of a given number.
//Factorial can't be negative.
//4! = 4*3*2*1

#include<stdio.h>

void main(){
    int count, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &count);

    if (count < 0)
    {
        printf("Factorial can't be negative.\n");
    }
    else
    {
        for (int i = 1; i <= count; i++)
        {
            fact *= i;
        }
    }
    printf("Factorial of %d is %d\n", count, fact);
    
    
}
