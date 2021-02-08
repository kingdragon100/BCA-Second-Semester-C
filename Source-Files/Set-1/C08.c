//Program to find area and circumference of circle.

#include<stdio.h>
#define PI 3.141592

void main(){

    float radius, area, circumference;

    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of Circle: %.2f", area);
    printf("\nCircumference of Circle: %.2f\n", circumference);
}