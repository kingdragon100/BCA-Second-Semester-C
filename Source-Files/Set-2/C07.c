//WAP to find the smallest among four given numbers.

#include<stdio.h>

void main(){

    int num1, num2, num3, num4, small;

    printf("Enter four numbers: ");
    scanf("%d%d%d%d",&num1, &num2, &num3, &num4);

    if (num1 < num2 && num1 < num3 && num1 < num4)
    {
        small = num1;
    }
    else if (num2 < num3 && num2 < num4)
    {
        small = num2;
    }
    else if (num3 < num4)
    {
        small = num3;
    }
    else
    {
        small = num4;
    }

    printf("Smallest number among %d, %d, %d, %d is %d\n", num1, num2, num3, num4, small);
}