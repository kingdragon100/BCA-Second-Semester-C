/*write a menu base program to perform calculation, according to following choice:
+ for addition
- For subtraction
* For multiplication
/ For division */

#include<stdio.h>

void main(){
    int num1, num2;
    char choice;

    printf("Menu\n+ for addition\n- For subtraction\n* For multiplication\n/ For division\n");
    printf("Enter your choice: ");
    scanf("%c", &choice);
    printf("Enter any two number: ");
    scanf("%d%d", &num1, &num2);

    switch (choice)
    {
    case '+':
        printf("Sum = %d\n", num1 + num2);
        break;
    case '-':
        printf("Difference = %d\n", num1 - num2);
        break;
    case '*':
        printf("Product = %d\n", num1 * num2);
        break;
    case '/':
        printf("Quotient = %d\n", num1 / num2);
        break;
    default:
        printf("Invalid Request!!!!\n");
        break;
    }
}