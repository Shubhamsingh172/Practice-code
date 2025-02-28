#include <stdio.h>

//program 1
// int main()
// {
//     int arr[] = {10,20,30,40,50};
//     int *ptr = arr;
//     printf("%d\n", *(ptr + 2));
//     printf("%d\n", *(ptr + 3));
//     return 0;
// }

//program 2 --> doubtful

// int main()
// {
//     int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int (*ptr)[3] = a + 1;
//     printf("%d\n%d\n%d\n",*(ptr + 0)[0], *(ptr + 1)[0], *(ptr + 2)[0]);
// }

//program 3 --> compiler dependent so we need to work upon this more for sure 

// int main()
// {
//     int i = 2;
//     printf("%d %d %d\n", ++i, i++, ++i);
//     return 0;
// }

int main()
{
    int x = 1000; 
    int y = 20000000;

    //or 
    int xx = 1000, yy = 2000; // result is always 1
    int *p = &x, *q = &y;
    printf("%d \n", q - p);
}