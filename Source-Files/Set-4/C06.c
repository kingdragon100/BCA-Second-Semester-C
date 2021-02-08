// WAP to search an item in an array. (using linear search technique)

#include<stdio.h>
#define MAX 100
void main(){
    int input[MAX], count, item, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &count);
    printf("Enter %d numbers:\n",count);
    for (int i = 0; i < count; i++)
    {
        printf("%3d. ",i+1);
        scanf("%d", &input[i]);
    }
    printf("Enter a number to search: ");
    scanf("%d", &item);
    for (int i = 0; i < count; i++)
    {
        if (input[i] == item)
        {
            printf("%d is present at location %d.\n",item, i+1);
            break;
        }
    }
    if (i == count)
    {
        printf("%d isn't present in the array.\n",item);
    }
}