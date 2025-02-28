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

//program 4

// int main()
// {
//     int x = 1000; 
//     int y = 20000000;

//     //or 
//     int xx = 1000, yy = 2000; // result is always 1
//     int *p = &x, *q = &y;
//     printf("%d \n", q - p);
//     printf("%d \n", p - q);
//}


//program 5 

// #include <stdio.h>

// int main() {
//     int arr[] = {5, 10, 15, 20, 25};
//     int *p = arr;
    
//     *(p++) += 10;
//     *(++p) *= 2;

//     printf("%d %d %d\n", arr[0], arr[1], arr[2]);
//     return 0;
// }


//program 6 --> pointer and functions pointer 

// #include <stdio.h>

// void modify(int *ptr) {
//     *(ptr++) += 5;
//     *(++ptr) *= 3;
// }

// int main() {
//     int arr[] = {2, 4, 6, 8, 10};
//     modify(arr);
    
//     for(int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

//program 7 -->double pointers question 

// #include <stdio.h>

// int main() {
//     int a = 5, b = 10;
//     int *p = &a, *q = &b;
//     int **pp = &p, **qq = &q;

//     **pp += 2;
//     **qq -= 3;
//     *pp = q;
//     **pp *= 2;

//     printf("%d %d\n", a, b);
//     return 0;
// }

//program 8 this program will show an error because void cannot be used in pointer arithmetic as it is a empty data type means 0

// #include <stdio.h>

// int main() {
//     void *ptr;
//     int x = 100;
//     ptr = &x;
    
//     printf("%d", *(ptr + 1));
//     return 0;
// }


// program 9 :  basic 2d pointer access question 

// #include <stdio.h>

// int main() {
//     int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int *ptr = &arr[0][0];

//     printf("%d ", *(ptr + 4));  // Accessing arr[1][1]
//     printf("%d ", *(ptr + 5));  // Accessing arr[1][2]
//     return 0;
// }


//program 10 : double pointer arithmetic question in c language 

// #include <stdio.h>

// int main()
// {
//     int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     printf("%d\n", *(*(arr + 2) + 2)); // crazy bhai smjha mujhe
// }


//program 11 : question on pointer arithmetic means arr name in double pointer itself is the address of the 1st element of the 1st row

// #include <stdio.h>

// int main() {
//     int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int *ptr = *arr;

//     printf("%d \n",*(ptr + 0)); 
//     printf("%d \n", *(ptr + 1));
//     return 0;
// }

// program 12: this program is same as above we do just the change is it goes with typecasting of pointer data type 

// #include <stdio.h>

// int main() {
//     int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int *ptr = (int *)arr;

//     printf("%d ", *(ptr + 3));  // Accessing arr[1][0]
//     printf("%d ", *(ptr + 4));  // Accessing arr[1][1]
//     return 0;
// }

// program 13: segmentation fault program in c language 
// #include <stdio.h>

// int main() {
//     int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int **ptr = (int **)arr;

//     printf("%d ", *(*(ptr + 1) + 1));  // Accessing arr[1][1]
//     return 0;
// }


// for above the correction should be this one.
// program 14
#include <stdio.h>

int main()
{
    int arr[][3] = {{1,2,3},{4,5,6}};
    int (*a)[3] = arr;
    //So int (*ptr)[3] tells the compiler that ptr is not a pointer to an integer (int *), but a pointer to an array of 3 integers
    // (int[3]).
    printf("%d\n", *(*(a + 1) + 1));
}
