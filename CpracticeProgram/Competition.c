#include <stdio.h>
//program 1: 
// int main() {
//     printf("%d %d %d", sizeof(3.14), sizeof(3.14f), sizeof(3.14L)); // double , float , double long 
//     return 0;
// }

//program 2:
// int main() {
//     int x = 5;
//     printf("%d\n", x++ + ++x);
//     return 0;
// }

//program 3:
// int main()
// {
//     int a = 10, *p;
//     p = &a;
//     printf("%d %d\n", *p, &p); // value of *p and its address which is own specific
//     return 0;
// }

//program 4:
#include <stdlib.h>
// #include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int)); // used for memory allocation in the memory 
    //malloc() ek single block of memory allocate karta hai, lekin jo memory allocate hoti hai, wo initialize nahi hoti. Matlab us memory block mein garbage values hoti hain.
    //malloc() ka return type void* hota hai, isliye aapko usse appropriate pointer type mein cast karna padta hai (jaise int*, char*).
    for(int i = 0; i < n; i++)
    {
        printf("Enter %d : ",i);
        scanf("%d", &arr[i]);
    }
    if(arr == NULL)
        printf("\nMemory Allocation is not done properly.\n");
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}

