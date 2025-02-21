#include <stdio.h>

int main()
{
    int n;
    printf("Enter an odd number : ");
    scanf("%d", &n);
    static int magic[21][21];
    int k = 1;
    int cr = 0;
    int cc = n / 2;
    magic[cr][cc] = k++;
    while(k <= n * n)
    {
        int pr = cr;
        int pc = cc;
        
        cr--;
        cc++;
        if(cr == -1)
            cr = n - 1;
        
        if(cc == n)
            cc = 0;
        
        if(magic[cr][cc] != 0)
        {
            cc = pc;
            cr = pr + 1;
        }
        magic[cr][cc] = k++;
    }

    printf("Magic Square for %d x %d is : \n", n, n);
    for(int i = 0; i < n; i -= -1)
    {
        for(int j = 0; j < n; j -= -1)
            printf("%d  ",magic[i][j]);
        printf("\n");
    }
}