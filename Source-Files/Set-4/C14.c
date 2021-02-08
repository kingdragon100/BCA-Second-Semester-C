// WAP to add two matrices by asking matrix order from user.

#include<stdio.h>
#define MAX 25

void main(){
    int m1[MAX][MAX], m2[MAX][MAX], row, col, sum[MAX][MAX];
    printf("Enter the no. of row and column of matrix: ");
    scanf("%d%d", &row, &col);
    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("[%d][%d]. ", i, j);
            scanf("%d", &m1[i][j]);
        }  
    }
    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("[%d][%d]. ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    //Adding two matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j]; 
        }
    }
    printf("Elements of first matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%4d", m1[i][j]);
        }
        printf("\n");
    }
    printf("Elements of second matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%4d", m2[i][j]);
        }
        printf("\n");
    }
    printf("After adding both matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%4d", sum[i][j]);
        }
        printf("\n");
    }
}