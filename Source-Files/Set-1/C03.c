//Program to compute bp using library function.

#include<stdio.h>
#include<math.h>

void main(){
    int base, power, comp;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the power: ");
    scanf("%d", &power);

    comp = pow(base, power);

    printf("The base %d raised to the power %d is %d\n", base, power, comp);

    //gcc C3.c -lm
    //(./a.out)
}