// WAP to read N numbers in an array and find the sum of odd numbers.

#include<stdio.h>
#define MAX 30

void main(){
    int input[MAX], sum = 0, count;
    printf("Enter N number: ");
    scanf("%d", &count);
    printf("Enter %d numbers:\n",count);
    for (int i = 0; i < count; i++)
    {
        printf("%d. ",i+1);
        scanf("%d",&input[i]);
    }
    for (int i = 0; i < count; i++)
    {
        if (input[i] % 2 != 0)
        {
            sum += input[i];
        }
    }
    printf("Sum = %d\n",sum);
}