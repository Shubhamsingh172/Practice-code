#include <stdio.h>

int main()
{
    int matrix[][3] = {
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}
                      };
    int *a = &matrix[0][0];
    int *b = &matrix[1][0]; // here we store the address of each row of first element in the array.
    int *c = &matrix[2][0];

    for(int i = 0; i < sizeof(matrix[0])/sizeof(int); i++)
        printf("%2d ", a[i]);
    printf("\n");
    
    for(int i = 0; i < sizeof(matrix[1])/sizeof(int); i++)
        printf("%2d ", b[i]);
    printf("\n");
    
    for(int i = 0; i < sizeof(matrix[2])/sizeof(int); i++)
        printf("%2d ", c[i]);
    printf("\nOR\n");
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = i; j <= i; j++)
        {
            printf("%2d %2d %2d", a[i], b[i], c[i]);
        }
        printf("\n");
    }
    return 0;
}