//Program to count total numbers of prime number between 1 to given number ‘n’.

#include<stdio.h>

void main(){
    int i, j, prime, count = 0, n;
    printf("Enter n number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
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
        count++;
    }
    }
    printf("The total number of Prime Number from 1 to %d is %d\n",n, count); 
}