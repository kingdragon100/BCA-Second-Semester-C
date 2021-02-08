//Program to read three numbers and find largest one.

#include<stdio.h>

void main(){

    int num1, num2, num3, large;
    printf("Enter any three number: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3){
        printf("%d is largest among %d, %d\n", num1, num2, num3);
    }
    else if (num2 > num3)
    {
        printf("%d is largest among %d, %d\n", num2, num1, num3);
    }
    else
    {
        printf("%d is largest among %d, %d.\n", num3, num2, num1);
    }
    
    
}