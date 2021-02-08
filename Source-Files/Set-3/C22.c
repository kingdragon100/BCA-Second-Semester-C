/*W rite a program to generate multiplication table up to number ‘n’ entered by user as:
1×1=1
1×2=2
...
1×10=10*/

#include<stdio.h>

void main(){
    int count;
    printf("Enter n number: ");
    scanf("%d", &count);

    for (int i = 1; i <= 10; i++)
    {
        printf("%2d * %2d\t= %4d\n", count, i, count * i);
    }
}