/*WAP to read age of 20 people and count the numbers of child, teen, adult, young, and old. Given
-Age < 13 = Child
-Age >= 13 and age < 20 = Teen
-Age >= 20 and age < 31 = Adult
-Age >= 31 and age < 55 = Young
-Age >= 55 = Old*/

#include<stdio.h>
#define MAX 20

void main(){
    int input[MAX], child, teen, adult, young, old;
    printf("Enter the age of 20 people:\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d. ",i+1);
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < MAX; i++)
    {
        if (input[i] < 13)
        {
            child++;
        }
        else if (input[i] >= 13 && input[i] < 20)
        {
            teen++;
        }
        else if (input[i] >= 20 && input[i] < 31)
        {
            adult++;
        }
        else if (input[i] >= 31 && input[i] < 55)
        {
            young++;
        }
        else
        {
            old++;
        }
    }
    printf("Number of:\nChild:%d\nTeen:%d\nAdult:%d\nYoung:%d\nOld:%d\n",child,teen,adult,young,old);
}