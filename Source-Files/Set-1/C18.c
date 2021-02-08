//Program to read number of male and female student in a class and finally find ratio of female and male student. Use variable of appropriate data types.

#include<stdio.h>

void main(){

    int male, female, total;
    float ratio;

    printf("Enter the no. of female students: ");
    scanf("%d", &female);

    printf("Enter the no. of male students: ");
    scanf("%d", &male);

    total = male + female;

    ratio = female / (float)male;

    printf("Ratio of female and male is %.2f\n", ratio);

}