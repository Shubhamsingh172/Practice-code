#include <iostream>
using namespace std;

//program for checking whether number is palindrome or not.
int palindrome(long long int n)
{
    long long temp = n;
    int rev = 0;
    while(temp)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    if (rev == n)
        return 1;
    return 0;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    int p = palindrome(n);
    if(p)
        cout << n << " is palindrome." << endl;
    else 
        cout << n << " is not a palidrome.\n";
    cout << endl;
}