/*Write a program to find the sum of following series:
a)1/1^2 + 1/3^2 + 1/5^2 +... upto 10 th terms
b) 11+22+33+... upto n th terms
c) 1^1 +2^2 +3^3 +4^4 +.... Upto n th terms*/

#include<stdio.h>
#include<math.h>

void main(){
    int choice,count,odd = 1,denominator;
    double sum = 0,s;
    start:
    printf("Menu:\nProgram to find the sum of the following:\n");
    printf("\n1. 1/1^2 + 1/3^2 + 1/5^2 + ... upto 10th terms\n");
    printf("2. 11 + 22 + 33 + ... upto nth terms.\n3. 1^1 + 2^2 + 3^3 + ... upto nth terms.\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        for (int i = 1; i <= 10; i++)
        {
            denominator = pow(odd,2);
            s = 1.0/denominator;
            sum += s;
            odd += 2;
	    }
        printf("Sum = %f\n",sum);
        break;
    case 2:
        printf("Enter n numbers: ");
        scanf("%d", &count);
        for (int i = 1; i <= count; i++)
        {
            sum += 11*i;
        }
        printf("Sum = %.0f\n",sum);
        break; 
    case 3:
        printf("Enter n numbers: ");
        scanf("%d", &count);
        for (int i = 1; i <= count; i++)
        {
            sum += pow(i,i);
        }
        printf("Sum = %.0f\n",sum);
        break;
    default:
        printf("Invalid Value!!!\n");
        break;
    }
    
    //gcc C31.c -lm
    //(./a.out)
}
