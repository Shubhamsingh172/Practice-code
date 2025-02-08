#include <stdlib.h>
#include <stdio.h>


//learn about printf function in cpp

//program 1

// int main()
// {
//     printf("Hello World\nHow are you ?\n");
//     return 0;
// }


// %d, %i, %f, %.2f, %c,  use

int main()
{
    int a = 10;
    printf("a = %d\n",a); // integer(decimal constandt)
    printf("a = %i\n",a); // integer constant
    printf("%f \n", 3.142685); // floating point number
    printf("%.2f\n", 3.1425689); // floating precision upto 2 places after decimal
    printf("%g\n", 123.456); // g used for floating point Automatically chooses between %f and %e (removes trailing zeros)
    printf("%G\n", 123.456); // g used for floating point Automatically chooses between %f and %e (removes trailing zeros)
    printf("%c\n", 65); // character 
    printf("%s \n", "Shubham Singh"); // string
    printf("%u\n", -1); //goto its last limit 4294967295
    printf("%o\n", 16); // prints octal value
    printf("%x\n", 255); // hexadecimal lowercase 
    printf("%X\n", 255); // hexadecimal Uppercase 
    int x = 10;
    printf("%p\n", &x); // pointer address
    printf("%e\n", 123.456789);
    printf("%E\n", 123.456789);
    printf("75%% marks is the qualitfication marks for JEE examination.\n"); // %% double percent will print the percent sign
    printf("%d",1001);
    return 0;
}
