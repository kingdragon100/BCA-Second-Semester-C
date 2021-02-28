//Program to print all the prime numbers between 1 to 100.

#include<stdio.h>

void main(){
    int i, j, prime;

    for (i = 2; i <= 100; i++)
    {
        prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
    if(prime){
        printf("%4d",i);
    }
    }
    printf("\n");
}