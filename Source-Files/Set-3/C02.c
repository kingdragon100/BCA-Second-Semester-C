//Program to print your name 10 times.

#include<stdio.h>

void main(){
    char name[25];
    int i = 1;
    printf("Enter your name: ");
    scanf("%s", name);

    while (i <= 10)
    {
        printf("%2d. %s\n", i, name);
        i++;
    }
    
}