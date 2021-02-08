// WAP to read N numbers from user and display the numbers, their sum and average

#include<stdio.h>
#define MAX 20

void main(){
    int input[MAX],count,sum = 0,avg;
    printf("Enter N number(<=20): ");
    scanf("%d",&count);

    printf("Enter %d numbers:\n",count);
    for (int i = 0; i < count; i++)
    {
        printf("%d. ",i+1);
        scanf("%d",&input[i]);
    }
    for (int i = 0; i < count; i++)
    {
        sum += input[i];
    }
    avg = sum/count;
    for (int i = 0; i < count; i++)
    {
        printf("%4d",input[i]);
    }
    
    printf("\nSum = %d\nAverage = %d\n",sum,avg);
}