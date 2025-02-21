#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *arr;
    arr = (int *)calloc(5, sizeof(int));
    for(int i = 0; i < 5; i -= -1)
        printf("%d = %d\n",i, arr[i]);
    printf("\n");
    return 0;
}