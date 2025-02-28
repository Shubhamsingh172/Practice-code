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


//program 8 : function pointer in deep 

// #include <stdio.h>

// void greet1() { printf("Hello! "); }
// void greet2() { printf("Namaste! \n"); }

// void (*getGreeting(int x))() {
//     return (x % 2 == 0) ? greet1 : greet2;
// }

// int main() {
//     void (*ptr)() = getGreeting(3);
//     ptr();
//     return 0;
// }


/*
program 9 :
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    const int *p1 = &a;
    int *const p2 = &a;

    p1 = &b;  // Allowed?
    *p2 = 20; // Allowed?

    printf("%d %d\n", *p1, *p2);
    return 0;
}

1️⃣ const int *p1 = &a; or int const *p1 = &a; (Pointer to Constant Integer)
💡 Yeh p1 ka type hai:

const int *p1;
Iska matlab p1 ek pointer hai jo kisi constant integer ko point karega.
Constant integer ka matlab:
*p1 ko modify nahi kar sakte (dereferencing ke through value change nahi kar sakte).
Par p1 ko kisi aur address pe point karwa sakte hain.
✅ Allowed:

p1 = &b;   // Haan, kyunki pointer `p1` ka address change ho sakta hai
❌ Not Allowed:


*p1 = 20;  // Galat! Read-only integer ko modify karne ki koshish
2️⃣ int *const p2 = &a; (Constant Pointer to Integer)
💡 Yeh p2 ka type hai:

int *const p2;
Iska matlab p2 ek constant pointer hai, jo kisi ek integer ko point karega aur iska address change nahi ho sakta.
Par *p2 ki value modify kar sakte hain!
❌ Not Allowed:

p2 = &b;   // Galat! Kyunki `p2` ka address change nahi ho sakta
✅ Allowed:

*p2 = 20;  // Haan, kyunki hum `*p2` ki value change kar sakte hain

*/

// program 10 : initializing the value to a null pointer which is pointing to nothing 

// #include <stdio.h>

// int main() {
//     int *ptr;
//     *ptr = 10;
    
//     printf("%d", *ptr);
//     return 0;
// }


//program 11: tricky pointer derefrencing in c

// #include <stdio.h>

// int main() {
//     int a = 5;
//     int *ptr1 = &a;
//     int **ptr2 = &ptr1;
//     int ***ptr3 = &ptr2;

//     ***ptr3 += 2;

//     printf("%d\n", a);
//     return 0;
// }
