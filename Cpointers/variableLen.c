#include <stdio.h>

#include <stdlib.h>

int main()
{
    int rows;

    printf("Enter the number of rows for the matrix : ");
    scanf("%d", &rows);

    int **arr = (int**)malloc(rows * sizeof(int *));
    int *columns = (int*)malloc(rows * sizeof(int));

    for(int i = 0; i < rows; i++)
    {
        printf("Enter the column for 1st matrix : ");
        //creating the columns which will take the input for column for each row of variable size in arr
        printf("\nEnter the columns for %d row : ", i + 1);
        scanf("%d", &columns[i]);
        arr[i] = (int*)malloc(columns[i] * sizeof(int));
    }

    for(int i = 0; i < rows; i++)
    {
        printf("Enter the %d elements for %d array : ", columns[i] , i + 1);
        for(int j = 0; j < columns[i]; j++)
            scanf("%d", &arr[i][j]);
    }

    printf("\nYour Variable Length Array is\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns[i]; j++)
            printf("%2d", arr[i][j]);
        printf("\n");
    }
    for(int i = 0; i < rows; i++)
        free(arr[i]);
    free(arr);
    return 0;
}