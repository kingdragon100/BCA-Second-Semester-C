/*Write a program to generate the following figure:
ABCDEEDCBA
ABCD  DCBA
ABC    CBA
AB      BA
A        A*/

#include<stdio.h>

void main()
{
    for(char i ='E';i >= 'A';i--){
        for (char j = 'A'; j <= i; j++)
        {
            printf("%c",j);
        }
        for (char k = 'E'; k != i; k--)
        {
            printf(" ");
        }
        for (char l = 'E'; l != i; l--)
        {
            printf(" ");
        }
        for (char m = i; m >= 'A'; m--)
        {
            printf("%c",m);
        }
        printf("\n");
    }
}
