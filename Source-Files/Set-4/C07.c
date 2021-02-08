// WAP to search an item in an array. (using binary search technique)

#include<stdio.h>
#define MAX 100

void main(){
    int input[MAX], temp, count, low, high, key, flag, m;
    printf("Enter the size of array: ");
    scanf("%d", &count);
    printf("Enter the %d elements of array:\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%2d. ", i+1);
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; i < count; i++)
        {
            if (input[i] > input[j])
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &key);
    high = count - 1;

    while (low < high)
    {
        m = (low + high) / 2;
        if (key > input[m])
        {
            low = m + 1;
        }
        else if (key < input[m])
        {
            high = m - 1;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is found.\n", key);
    }
    else
    {
        printf("%d is not found.\n", key);
    }
}