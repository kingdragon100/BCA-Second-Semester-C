// WAP to read N numbers in an array and then increment the elements by constant C, where C is entered by users.

#include<stdio.h>
#define MAX 30

void main(){
    int input[MAX], C, count;
    printf("Enter N numbers: ");
    scanf("%d",&count);
    printf("Enter %d numbers:\n",count);
    for (int i = 0; i < count; i++)
    {
        printf("%3d. ",i+1);
        scanf("%d",&input[i]);
    }
    printf("Results before constant C\n");
    for (int i = 0; i < count; i++)
    {
        printf("%5d",input[i]);
    }
    printf("\n");
    printf("Enter constant C: ");
    scanf("%d", &C);
    printf("Array after adding constant C\n");
    for (int i = 0; i < count; i++)
    {
        printf("%5d",input[i] + C);
    }
    printf("\n");
}