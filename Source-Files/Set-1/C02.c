//Program to find area and perimeter of rectangle.

#include<stdio.h>

void main(){
    float area, perimeter, l,b;

    printf("Enter length and breadth of rectangle: ");
    scanf("%f%f", &l, &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area of Rectangle = %.2f\nPerimeter of Rectangle = %.2f\n", area, perimeter);
}