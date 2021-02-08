//WAP to check whether a year is leap or not.

#include<stdio.h>

void main(){

    int year;
    printf("Enter the year: ");
    scanf("%4d", &year);

    if(year%400 == 0 || year%4 == 0 && year%100 != 0){
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n",year);
    }
    
}