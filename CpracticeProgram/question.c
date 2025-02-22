#include <stdio.h>

int main()
{
    // int n = 120;
    // printf("%d", 123456);
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}