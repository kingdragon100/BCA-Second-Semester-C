//Program to find Simple Interest and Amount.

#include<stdio.h>

void main(){
    
    int p, t, r, SI, A;

    printf("Enter Principal, Time and Rate: ");
    scanf("%d%d%d", &p, &t, &r);

    SI = (p * t * r)/ 100;
    A = p + SI;

    printf("Simple Interest = %d\nAmount = %d\n", SI, A);
}