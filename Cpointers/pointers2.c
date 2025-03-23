#include <stdio.h>

int main()
{
    int matrix[][3] = {{1,2,3},
                       {4,5,6},
                       {7,8,9}};
    int *a = &matrix[0][0];
    int *b = &matrix[1][0]; // here we store the address of each row of first element in the array.
    int *c = &matrix[2][0];

    for(int i = 0; i < sizeof(matrix)/sizeof(int); i++)
        printf("%2d ", a[i]);
    printf("\n");
    return 0;
}