//WAP to initialize 10 numbers in an array and display them.

#include<stdio.h>
#define MAX 10

void main(){
    int input[MAX];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%2d. ",i+1);
        scanf("%d",&input[i]);
    }
    printf("The 10 numbers are:\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%4d",input[i]);
    }
    printf("\n");
}