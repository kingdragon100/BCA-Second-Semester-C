//Design the layout of chess board using nested loop. [hint use ASCII 219 for white and 255 for black square box]

#include<stdio.h>

void main(){
    int alter = 1, rows=8, cols = 8;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (alter == 1)
            {
                printf("%2c", 255);
            }
            else
            {
                printf("%2c", 219);
            }
            alter *= -1;
        }
        if(cols % 2 == 0)
        {
            alter *= -1;
        }
        printf("\n");
    }
    
}