//Program to find the sum of square of first ‘n’ natural numbers. (using all loops)

#include<stdio.h>

void main(){
    int count, sum = 0, i = 0, choice;
    printf("\n1. for Loop\n2. while loop\n3. do while loop\n4. all loops\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter 'n' no: ");
    scanf("%d", &count);

    for (i = 0; i <= count; i++)
    {
        sum += i * i;
    }
    printf("Sum: %d\n", sum);

    while(i <= count)
    {
        sum += i * i;
        i++;
    }
    printf("Sum: %d\n", sum);

    do
    {
        sum += i * i;
        i++;
    } while (i < count);
    printf("Sum: %d\n", sum);

}