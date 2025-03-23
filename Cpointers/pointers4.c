#include <stdio.h>

int main()
{
    int matrix[][4] = {
        {1, 2, 3, 4},
        {4, 5, 6, 7},
        {7, 8, 9, 0}};
    int *arr[3];

    arr[0] = &matrix[0][0];
    arr[1] = &matrix[1][0];
    arr[2] = &matrix[2][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < sizeof(matrix[i]) / sizeof(int); j++)
            printf("%2d", arr[i][j]);
        printf("\n");
    }

    printf("\nALSO\n");

    int *arr1[3];
    // instead of defining or storing the address of matrix separately we use here for loop for assigning the address
    for (int i = 0; i < 3; i++)
        arr1[i] = &matrix[i][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < sizeof(matrix[i]) / sizeof(int); j++)
            printf("%2d", arr[i][j]);
        printf("\n");
    }

    printf("\n");
    return 0;
}