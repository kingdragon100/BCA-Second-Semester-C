//Program to read a character and check whether it is letter, digits or others characters

#include<stdio.h>

void main(){

    char input; 
    printf("Enter a character: ");
    scanf("%c", &input);

    if (input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z')
    {
        printf("%c is letter.\n",input);
    }
    else if (input >= 48 && input <= 57)
    {
        printf("%c is number.\n", input);
    }
    else
    {
        printf("%c is other characters.\n",input);
    }
    
}