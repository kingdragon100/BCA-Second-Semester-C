//Program to generate first ‘n’ odd terms.

#include<stdio.h>

void main(){
    int odd = 1, num;
    printf("Enter the 'n' no: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%2d. %d\n", i, odd);
        odd += 2;
    }
    
    
}