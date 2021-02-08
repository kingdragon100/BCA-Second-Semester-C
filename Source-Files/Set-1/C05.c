//Program to find surface area of a box.

#include<stdio.h>

void main(){
    int l, b, h, s;

    printf("Enter length, breadth, and height: ");
    scanf("%d%d%d", &l, &b, &h);

    s = 2 * ((l*b) + (l * h) + (b * h));

    printf("The surface area of box = %d\n", s);
}