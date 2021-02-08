//Program to read lowercase character and convert it into uppercase.

#include<stdio.h>

void main(){

    char input;

    printf("Enter lowercase character: ");
    scanf("%c", &input);

    if (input >= 'a' && input <= 'z')
    {
        printf("Lowercase: %c\t Uppercase: %c\n",input, input - 32);
    }
    else
    {
        printf("Invalid");
    }
    
}