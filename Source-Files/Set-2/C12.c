/*WAP to read age of a person and display remarks accordingly:
Age                         Remarks
Age<12                      CHILD
12<=age<20                  TEEN
20<=age<30                  ADULT
30<=age<55                  YOUNG
Age>=55                     OLD
*/

#include<stdio.h>

void main(){

    int age;
    char* remarks;

    printf("Enter the age: ");
    scanf("%d",&age);

    if (age > 0 && age < 200)
    {
        if (age<12)
        {
            remarks = "Child";
        }
        else if (age > 12 && age < 20)
        {
            remarks = "Teen";
        }
        else if (age > 20 && age < 30)
        {
            remarks = "Adult";
        }
        else if (age > 30 && age < 55)
        {
            remarks = "Young";
        }
        else
        {
            remarks = "Old";
        }
        printf("Age: %d\nRemarks: %s\n", age, remarks);
        
    }
    else
    {
        printf("Invalid Value!!\n");
    }
    
    
}
