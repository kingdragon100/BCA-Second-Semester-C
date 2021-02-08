//Program to find the reverse of a given number.

#include<stdio.h>

void main(){
    int rev = 0, n, mod, copy;
    printf("Enter a number: ");
    scanf("%d", &n);
    copy = n;

    while (n != 0)
    {
        mod = n % 10;
        rev = rev*10 + mod;
        n /= 10;
    }
    printf("Reverse of %d is %d\n", copy, rev);
    
}