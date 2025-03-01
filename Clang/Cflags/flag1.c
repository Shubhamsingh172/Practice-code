//program 1

// #include <stdio.h>

//for left align we have to use - after percent symbol in c
// int main()
// {
//     printf("|%-10d|",123);
//     return 0;
// }

//program 2
// +(plus) sign after % will show the sign of the positive number like this 123 to +123 it will not work upon negative numbers 

// #include <stdio.h>
// int main()
// {
//     printf("%+d\n", -123); // it will not show the sign to this number 
//     printf("%+d\n", 123); // it will show the sign to this number as it is a positive number 
// }

//program 3:
// #include <stdio.h>

// int main()
// {
//     printf("%d\n", 123); // it will normally print the number 123 as it is 
//     printf("% d\n",123); // it will occpy one space as space before positive number just print the space 
//     printf("% d\n",-123); // space before the negative number will not effect any thing just print the number with its sign as it is 
// }

//program 4:
//#(flag) will show the base of the octal and hexadecimal number 

// #include <stdio.h>

// int main()
// {
//     printf("%#o\n", 123);
//     printf("%#x\n", 123);
//     printf("%#.2f\n", 123.456789); // both will give the same output  // 123.46
//     printf("%.2f\n", 123.456789);  // this line and the above line give the same output //123.46
//     printf("%#.3f\n", 123.456789); //123.457
//     printf("%#.4f\n", 123.456789); //123.4568
// }

//program 5: zero padding 

// #include <stdio.h>

// int main()
// {
//     printf("%05d\n",123);
//     return 0;
// }

