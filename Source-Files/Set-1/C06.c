//Program to find temperature in Fahrenheit and convert it into celsius.

#include<stdio.h>

void main(){

    float c, f;

    printf("Enter the fahrenheit: ");
    scanf("%f", &f);

    c = 5 * (f - 32) / 9;

    printf("Fahrenheit = %.2f converted to Celsius = %.2f\n", f, c);
}