//Program to read number of days and convert it into years, months and days.

#include<stdio.h>

void main(){
    int ndays, month, year, days;

    printf("Enter no. of days: ");
    scanf("%d", &ndays);

    year = ndays / 365;
    month = (ndays%365) / 30;
    days =  (ndays%365) % 30;

    printf("No. of days = %d\nwhich is %d Year %d Month %d Days.\n", ndays, year, month, days);
}