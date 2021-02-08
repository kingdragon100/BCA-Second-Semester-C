//  WAP to read N numbers and sort them in ascending order. (Using bubble sort)

#include<stdio.h>
#define MAX 20

void main(){
    int input[MAX], count, temp;
    printf("Enter N numbers: ");
    scanf("%d",&count);
    printf("Enter %d numbers:\n",count);
    for (int i = 0; i < count; i++)
    {
        printf("%2d. ",i+1);
        scanf("%d",&input[i]);
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; i < count - i - 1; j++)
        {
            if (input[j] > input[j+1])
            {
                temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }
    printf("Data in ascending order:\n");
    for (int i = 0; i <= count; i++)
    {
        printf("%4d",input[i]);
    }
}