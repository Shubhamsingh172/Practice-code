// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // Write C++ code here
    char s1[][20] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char s2[][10] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    char s3[][20] = {"", "Hundred", "Thousand", "Lakh", "Crore"};
    
    int number;
    cout << "Enter a number : ";
    cin >> number;
    int copy = number;
    int digit = 0;
    
    while(copy)
    {
        digit++;
        copy /= 10;
    }
    
    if(!(digit & 1))
        digit++;
    
    while(number > 999)
    {
        int x = number / int(pow(10, digit - 2));
        if(x <= 19)
            cout << s1[x] << " ";
        else
        {
            cout << s2[x / 10] << " ";
            cout << s1[x % 10] << " ";
        }
        cout << s3[digit / 2] << " ";
        number %= int(pow(10, digit - 2));
        digit -= 2;
    }
    
    if(number > 99)
    {
        cout << s1[number / 100] << " ";
        cout << s3[digit / 2] << " ";
        number %= 100;
    }
    
    if(number > 19)
    {
        cout << s2[number / 10] << " ";
        cout << s1[number % 10] << " ";
    }
    else
        cout << s1[number] << " ";
    return 0;
}