//Program to read cost price and selling price of a goods and find profit or loss amount.

#include<stdio.h>

void main(){

    int cp, sp, p, l;
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    printf("Enter the selling price: ");
    scanf("%d", &sp);

    if(sp > cp){
        p = sp - cp;
        printf("Profit = %d\n", p);
    }
    else if (cp > sp)
    {
        l = cp - sp;
        printf("Loss: %d\n", l);
    }
    else
    {
        printf("Neither profit nor loss.\n");
    }
    
}