#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int **matrix;
    int row, col;
    printf("enter row : ");
    scanf("%d",&row);
    printf("enter col : ");
    scanf("%d",&col);
    matrix = malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++)
    {
        matrix[i] = malloc(col * sizeof(int));
    }
    for(int i = 0; i < row;i++)
    {
        for(int j = 0; j < col ; j++)
        {

            printf("enter the matrix : ");
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i = 0; i < row;i++)
    {
        for(int j = 0; j < col ; j++)
        {
            printf("%d",matrix[i][j]);

        }
    }
}
