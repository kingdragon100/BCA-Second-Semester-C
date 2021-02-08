//Program to find temperature in Celsius and convert it into Fahrenheit.

#include<stdio.h>

void main(){
    float c, f;
    printf("Enter the celsius: ");
    scanf("%f", &c);

    f = (1.8 * c) + 32;

    printf("Celsius = %.2f converted into Fahrenheit = %.2f\n", c, f);
}