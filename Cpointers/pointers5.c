#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, columns;
    printf("Enter the rows and columns for matrix : ");
    scanf("%d%d", &rows, &columns);
    int **arr = (int**)malloc(rows * sizeof(int *));
    for(int i = 0; i < rows; i++)
        arr[i] = (int *)malloc(columns * sizeof(int));
    
    printf("\nEnter %d elements : ", rows * columns);
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
            scanf("%d", &arr[i][j]);
    }
    printf("\nYour Matrix is \n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}