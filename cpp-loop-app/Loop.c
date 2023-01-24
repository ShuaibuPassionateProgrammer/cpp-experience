#include <stdio.h>
#include <stdlib.h>

void clrscr();
void nested_for_loop();
void drawTriangle();

int main()
{
    clrscr();
    nested_for_loop();
    drawTriangle();

    return 0;
}

void clrscr()
{
    system("cls");
}

void nested_for_loop()
{
    int i, j;
    int row=3, col=3;
    
    int array[3][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void drawTriangle()
{
    int i, j, rows, cols, space;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<rows; i++)
    {
        for(space = i; space < rows; space++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}