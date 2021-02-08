// WAP to read N numbers and sort them in ascending order. (Using Selection sort)

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
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; i < count; j++)
        {
            if (input[i] > input[j])
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    printf("Data in ascending order:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%4d",input[i]);
    }
}