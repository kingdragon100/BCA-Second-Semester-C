// WAP to read three numbers and find the median number.

#include<stdio.h>

void main()
{
	int num1, num2, num3, mid;
	printf("Enter first number  : ");
	scanf("%d",&num1);
	printf("Enter second number : ");
	scanf("%d",&num2);
	printf("Enter third number  : ");
	scanf("%d",&num3);
	
	if(num1 >= num2 && num1 <= num3 || num1 >= num3 && num1 <= num2)
		mid = num1;
	else if(num2 >= num1 && num2 <= num3 || num2 >= num3 && num2 <= num1)
		mid = num2;
	else
		mid = num3;
	
	printf("\n%d is the median among ( %d %d %d )", mid, num1, num2, num3);
	
}