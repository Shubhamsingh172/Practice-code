// Online C++ compiler to run C++ program online
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    // Write C++ code here
    char arr1[][20] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char arr2[][10] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    
    char arr3[][10] = {"", "Hundred", "Thousand", "Lakh", "Crore"};
    
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    int copy = number;
    int digits = 0;
    
    while(copy)
    {
        digits++;
        copy /= 10;
    }
    printf("\ndigits : %d\n", digits);
    
    if(!(digits & 1))
        digits++;
        
    while(number > 999)
    {
        int x = number / (int)(pow(10, digits - 2));
        if(x <= 19)
            printf("%s ",arr1[x]);
        else 
        {
            printf("%s ",arr2[x / 10]);
            printf("%s ",arr1[x % 10]);
        }
        printf("%s ",arr3[digits / 2]);
        number %= (int)(pow(10, digits - 2)); // to avoid the error of bad operand type we here typecast the double value of pwoer function into float 
        digits -= 2;
    }
    if(number > 99)
    {
        printf("%s ",arr1[number / 100]);
        printf("%s ",arr3[1]);
        number %= 100;
    }
    
    if(number > 19)
    {
        printf("%s ",arr2[number / 10]);
        printf("%s ",arr1[number % 10]);
    }
    else 
        printf("%s ",arr1[number]);
    printf("\n");
    return 0;
}