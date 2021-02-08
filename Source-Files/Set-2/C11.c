/*WAP to read marks obtained in your final exams in all subjects and find total marks,percentage,
results (pass or fail), division. ( assume all the necessary condition)*/

#include<stdio.h>

void main(){
    float account, c, english, maths, mpca, total, percentage;
    char* result;
    char* division;

    //Input Marks
    printf("Enter your marks in Financial Account(<=60): ");
    scanf("%f",&account);
    printf("Enter your marks in C Programming(<=60): ");
    scanf("%f",&c);
    printf("Enter your marks in English II(<=60): ");
    scanf("%f",&english);
    printf("Enter your marks in Maths(<=60): ");
    scanf("%f",&maths);
    printf("Enter your marks in Microprocessor and Computer Architecture(<=60): ");
    scanf("%f",&mpca);

    //Marks Limit
    if(account <= 60 && c <= 60 &&  english <= 60 && maths <= 60 && mpca <= 60){
    
        total = account + c + english + maths + mpca;
        percentage = total/5.0;

        //Result
        if (account >= 24 && c >= 24 && english >= 24 && maths >=24 && mpca >= 24)
        {
            result = "Pass";

            if (percentage >= 50 && percentage <= 60)
            {
                division = "Distinction";
            }
            else if (percentage >= 40 && percentage <= 50)
            {
                division = "First";
            }
            else if (percentage >= 30 && percentage <= 40)
            {
                division = "Second";
            }
            else
            {
                division = "Third";
            }
        }
        else
        {
            result = "Fail";
        }
        
        //Output
        if (result == "Fail")
        {
            printf("You have failed.\n");
        }
        else
        {
            printf("\n-----------------------------------------------------------------------------------------\n");
            printf("\nFinancial Account: %.2f\tC: %.2f\tEnglish II: %.2f\nMathematics II: %.2f\t\tMicroprocessor and Computer Architecture: %.2f\n", account, c, english, maths, mpca);
            printf("\n-----------------------------------------------------------------------------------------\n");
            printf("Total: %.2f\tPercentage: %.2f\nResult: %s\tDivision: %s\n", total, percentage, result, division);
        }
    }
    else
    {
        printf("Invalid Value!!\n");
    } 
}