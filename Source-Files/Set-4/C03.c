// WAP to find largest and smallest numbers from set of N numbers entered by users.

#include<stdio.h>
#define MAX 20

void main(){
    int input[MAX], count, small=0,large=0;
    printf("Enter N number: ");
    scanf("%d",&count);
    printf("Enter %2d numbers:\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%2d. ",i+1);
        scanf("%d",&input[i]);
    }
    small = input[0];
    large = input[0];

    for (int i = 0; i < count; i++)
    {
        if (small > input[i])
        {
            small = input[i];
        }
        if (large < input[i])
        {
            large = input[i];
        }
    }
    printf("Largest Number: %d\nSmallest Number: %d\n",large, small);
    
}