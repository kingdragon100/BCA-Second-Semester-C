/*Program to generate the number as:
123454321
 1234321
  12321
   121
    1
*/

#include<stdio.h>

void main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j != i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k < i; k++)
        {
            printf("%d",k);
        }
        for (int l = i; l >= 1; l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}
