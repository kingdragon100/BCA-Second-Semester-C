/*Write a menu base program for
1. Area of rectangle
2. Perimeter of rectangle
3. exit*/

#include<stdio.h>

void main(){
    int choice, width, length;
    printf("1. Area of rectangle\n2. Perimeter of rectangle\n3. exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter the length and width: ");
    scanf("%d%d", &length, &width);
    switch (choice)
    {
    case 1:
        /* Area of Rectangle */
        printf("Area = %d\n",length * width);
        break;
    case 2:
        /* Perimeter of Rectangle */
        printf("Perimeter = %d\n", 2 * (length + width));
        break;
    case 3:
        printf("Exit!!!!!!!\n");
        break;
    default:
        printf("Inavlid Value!!");
        break;
    }
}