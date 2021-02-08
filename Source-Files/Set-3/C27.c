/*Write a program to generate the pyramid of number as
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include<stdio.h>

void main(){
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n-1; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 3; k <= i*2 + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 3; i >= 1; i--)
    {
        for (int j = 2+1; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 3; k <= i*2 + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}