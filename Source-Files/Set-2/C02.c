//Program to read a number and check whether a number is positive or negative.

#include<stdio.h>

void main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is positive.\n",num);
    }
    else if(num < 0)
    {
        printf("%d is negative.\n",num);
    }
    else
    {
        printf("%d is zero.\n",num);
    }
    
    
}