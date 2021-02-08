//Program to convert Distance in meter into kilometer and meter. [1km = 1000m]

#include<stdio.h>

void main(){
    
    int m;
    float km;

    printf("Enter the distance in meter: ");
    scanf("%d", &m);

    km = m / 1000.0; 

    printf("%d m = %.2f km.\n", m, km);
}