/*Write a program to display the following output:
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1*/

#include<stdio.h>

void main(){

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%2d", j);
        }
        printf("\n");
    }
    
}