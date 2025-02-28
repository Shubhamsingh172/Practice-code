//program 1

// #include <stdio.h>

// int main() {
//     int a = 10, b = 20;
//     int *p1 = &a, *p2 = &b;
    
//     *p1 = *p2;
//     *p2 = *p1 + *p2;
    
//     printf("%d %d\n", a, b);
//     return 0;
// }

//program 2

// #include <stdio.h>

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;

//     printf("%d %d %d\n", *(ptr++), *(++ptr), *(ptr + 2));
//     return 0;
// }

//program 3 : function pointer question

// #include <stdio.h>

// void fun(int x) {
//     printf("%d\n", x);
// }

// int main() {
//     void (*ptr)(int) = fun;
//     (*ptr)(10);
//     ptr(20);
//     return 0;
// }

//program 4:pointer to pointer vs pointer question

// #include <stdio.h>

// int main() {
//     int x = 10;
//     int *p = &x;
//     int **pp = &p;

//     **pp = **pp + 5;
    
//     printf("%d %d\n", *p, x);
//     return 0;
// }

//program 5 : pointer subtraction mechanism

// #include <stdio.h>

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr1 = arr;
//     int *ptr2 = arr + 3;
//
//     printf("%d\n", ptr2 - ptr1);
//     printf("%d\n", ptr1 - ptr2);
//     return 0;
// }

/*
computes how many elements (not bytes) are between ptr1 and ptr2.

If ptr2 is ahead of ptr1 (i.e., pointing to a later index in the array), the result is positive.
If ptr1 is ahead of ptr2 (i.e., pointing to an earlier index in the array), the result is negative.
*/

//program 6 : floating point question in c language 

// #include <stdio.h>

// int main() {
    
//     float f = 3.1558901f;
//     float ff = 3.14568999f;
//     float fff = 3.0123654f;
//     float ffff = 3.1989;
//     printf("%2.1f\n",f);
//     printf("%2.1f\n",ff);
//     printf("%2.1f\n",fff);
//     printf("%2.1f\n",ffff);
// }

//program 7 :

// #include <stdio.h>

// int main() {
//     char *str = "Hello";  // Yeh ek string literal hai (read-only memory mein store hota hai)
//     str[0] = 'M';         // Galti! Read-only memory ko modify karne ki koshish ho rahi hai

//     printf("%s\n", str);
//     return 0;
// }

// 1️⃣ char *str = "Hello"; kya karta hai?

// "Hello" ek string literal hai.
// String literals read-only memory mein store hote hain.
// str ek pointer hai jo "Hello" ke first character (H) ko point kar raha hai.
// Important: String literal ko modify karna allowed nahi hota!
// 2️⃣ str[0] = 'M'; pe kya hoga?

// Tumne "Hello" ka pehla character (H) change karke 'M' karne ki koshish ki.
// Lekin yeh read-only memory mein hai!
// Result: Segmentation Fault (core dumped) ya undefined behavior (program crash ho sakta hai).
