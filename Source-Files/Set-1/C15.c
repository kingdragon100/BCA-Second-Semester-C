//Program to check whether entered number is odd or even using ternary operator. (exp1?true:false)

#include<stdio.h>

void main(){
    int num, check;

    printf("Enter a number: ");
    scanf("%d", &num);

    check = num % 2 ? printf("%d is odd.\n",num):printf("%d is even.\n",num);
}