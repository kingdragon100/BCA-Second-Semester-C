//Program to check whether a number is odd or even.

#include<stdio.h>

void main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("%d is even.\n",num);
    }
    else
    {
        printf("%d is odd.\n",num);
    }
    
}