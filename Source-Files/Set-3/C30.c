//Program to find the value of given base to the given power. [y=a^b]

#include<stdio.h>
#include<math.h>

void main(){
    int base,power,value;
    printf("Enter the base & power: ");
    scanf("%d%d",&base,&power);
    value = pow(base,power);
    printf("The value of base(%d) raised to the power(%d) is %d\n",base,power,value);

    //gcc C30.c -lm
    //(./a.out)
}