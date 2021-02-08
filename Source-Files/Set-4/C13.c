// WAP to read salary of N employees and count the numbers of employee receiving salaries between 40000 to 60000.

#include<stdio.h>
#define MAX 100

void main(){
    int input[MAX], count, emp;
    printf("Enter N numbers: ");
    scanf("%d", &count);
    printf("Enter salaries of %d people:\n",count);

    for (int i = 0; i < count; i++)
    {
        printf("%2d. ",i+1);
        scanf("%d", &input[i]);
    }
    
    for (int i = 0; i < count; i++)
    {
        if (input[i] >= 40000 && input[i] <= 60000)
        {
            emp++;
        }
    }
    printf("Number of employees receiving salaries between 40000 to 60000 is %d.\n",emp);
}