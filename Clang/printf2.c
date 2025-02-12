#include <stdlib.h>
#include <stdio.h>

int main()
{
    // printf("%.5f\n", 3.1562); // it means  that in output format after point it will take fixed value after point
    // printf("%i", 1000);

    // INTEGER FORMAT SPECIFIERS
    printf("%d\n", -123);       // 123
    printf("%d\n", 2147483648); // as it crossing the range of integer therefore it again starts from last range of negative
    printf("%d\n", -123);       // it is same like integer decimal above
    printf("%u\n", 4294967296); // unsigned integer value crossing its range therefore output gives 0 as its answer
    printf("%u\n", -1);         // it will give the last value in the range of unsigned int
    printf("%o\n", 123);        // answer will in the decimal format but after conversion from octal to binary and then binary to decimal
    printf("%x\n", 255);        // ans is ff
    printf("%d\n", 0x123);      // answer like this 1 x 16sq x 1 + 16 x 2 + 16raised to zero x 1 = 256 + 32 + 3 = 291

    // floating-point format specifiers

    printf("%f\n", 2.34);   // ans is 2.340000
    printf("%e\n", 1000.0); // ans is 1.000000e+03 scientific
    printf("%g\n", 3.14);   // ans is 3.14, in this it uses %e or %f whichever is shorter

    // character format specifier
    printf("%c\n", 65);              // ans is A
    printf("%s\n", "Shubham Singh"); // ans is Shubham Singh
    int a = 20;
    int *p = &a;
    printf("%p\n", p);  // this will print p's address
    printf("%d\n", *p); // ans is 20

    // Special format specifiers
    int count;
    printf("Hello%n World\n", &count);                           // %n will store the number of the character printed so far in the variable
    printf("Number of the character are printed : %d\n", count); // 5 as answer
    printf("75%%\n");                                            // by using this double modulo we can actuallyl percentage at the end of the variable

    // Length Modifieres (for specifying size)
    printf("%hd\n", (short)32768);

    /*
    These are used with other format specifiers to modify their behavior.

    Modifier	Used With	    Meaning	Example Output (printf)
    h	        %hd, %hu, etc.	Short integer	printf("%hd", (short)12345);
    l	        %ld, %lu, etc.	Long integer	printf("%ld", 123456789L);
    ll	        %lld, %llu	    Long long integer	printf("%lld", 9223372036854775807LL);
    L	        %Lf	            Long double	printf("%Lf", 3.141592653589793L);
*/

    //width and precision specifiers 
    printf("|%10d|\n",123); // result will display by default right align
    printf("|%10d|\n",100); // |        100| // after percentage number specifies the width which will given to the output
    printf("|%10s|\n","Shubham"); //|   Shubham|

    //zero padding 
    printf("%010d\n",123); // here now spaces filled with the zero therefore it is called as zero padding output : 0000000123

    //as all the result is by default right align therefore after %- will determine the output in the left align direction
    printf("|%-10d|\n", 123); // |123       |
    printf("|%-010d|\n", 123); //|123       | // no padding will done as it will be ignored

    //precision setting after decimal program
    printf("%.2f\n", 12.456789); // 12.46
    printf("%.3f\n", 12.456789); // 12.457
    printf("%.4f\n", 12.456789); // 12.4568
    printf("%.5f\n", 12.456789); // 12.45679
    printf("%.5s\n", "Shubham"); // it will only occupy 5 characters rest of others will be truncated as precision is 5
    
    // width + precision setting 
    printf("|%10.2f|\n",123.45789632); // |    123.46|
    //also width + precision setting in decimal
    printf("|%10.5d|\n\n",123);

    //print with stars 
    for(int i = 1; i <= 5; i++)
    {
        printf("%*d\n",i, 1); // * is for width in which we are giving ith width to print
    }
    

    /*
    Format	        Usage	                Example Call	                     Output
    %*d	        Dynamic width	            printf("%*d", 5, 42);	                42
    %.*f	Dynamic precision	            printf("%.*f", 3, 3.14159);	            3.142
    %*.*f	Dynamic width & precision	    printf("%*.*f", 8, 2, 3.14159);	        3.14
    %-*d	Left-aligned dynamic width	`   printf("	%-*d)
    */
    //Dynamic width  (%*d)
    printf("|%*d|\n",10, 123); //|0000000123|
    printf("|%*d|\n",10, 123); //|       123|

    // Dynamic Precision (%.*f)
    printf("%.*f\n",3,123.456789); // here we dynamically define how much precised value must be needed after the point at runtime.

    //  Dynamic Width and Precision (%*.*f)
    printf("|%*.*f|\n",15, 3, 123.469789);

    //left aligned with dynamic width 
    printf("|%-*d|\n",10, 456); // |456       |

}