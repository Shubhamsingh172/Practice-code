// Online C++ compiler to run C++ program online
#include <stdio.h>

int boolcheck1()
{
    printf("Checking condition 1\n");
    return 0;
}
int boolcheck2()
{
    printf("Checking the conditon 2\n");
    return 1;
}
int main() {
    // Write C++ code here
    // if(boolcheck1() || boolcheck2())
    if(boolcheck1() && boolcheck2()) // here both side block and condition will executed as it is a true and for or if any one of the operand is true it is considered to be true;
        printf("Condition met\n");
    else 
        printf("Condition not met\n");
    return 0;
}