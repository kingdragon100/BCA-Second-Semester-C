//WAP to read coefficient of quadratic equation and find all its roots.

#include<stdio.h>
#include<math.h>

void main(){
    float a, b, c, d, x1, x2;
    printf("Enter the coefficient of quadratic equation: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0)
    {
        printf("Equation is not quadratic.\n");
    }
    else
    {
        d = (b*b) - (4*a*c);
        if (d<0)
        {
            printf("Roots are imaginary.\n");
        }
        else if (d == 0)
        {
            x1 = b/(2.0*a);
            printf("Both roots are same and is %.2f",x1);
        }
        else
        {
            x1 = (-b + sqrt(d))/(2*a);
            x2 = (-b - sqrt(d))/(2*a);
            printf("Roots are %.2f and %.2f.",x1,x2);
        }
    }
    //gcc S210.c -lm
    //(./a.out)
}