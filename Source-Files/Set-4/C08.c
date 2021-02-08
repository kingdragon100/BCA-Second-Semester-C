// WAP to read N items and sort them in ascending or descending order depending upon user choice (for e.g. 'a' for ascending and 'd' for descending)

#include<stdio.h>
#define MAX 20

void main(){
    int input[MAX], count, temp;
    char choice;
    printf("Enter N numbers: ");
    scanf("%d",&count);
    printf("Enter %d numbers:\n",count);
    for (int i = 0; i < count; i++)
    {
        printf("%2d. ",i+1);
        scanf("%d",&input[i]);
    }
    fflush(stdin);
    printf("a for Ascending\nd for descending\nEnter your choice(a/d): ");
    scanf("%c",&choice);
    switch (choice)
    {
    case 'a':
    case 'A':
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
        break;
    case 'd':
    case 'D':
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
        printf("Data in descending order:\n");
        for (int i = 0; i < count; i++)
        {
            printf("%4d",input[i]);
        }
        break;
    default:
        printf("Invalid!\n");
        break;
    }
}