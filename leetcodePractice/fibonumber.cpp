#include <iostream>
using namespace std;

int fibo(int n)
{
    if(n == 0 || n == 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Fibonacci number of " << n << " is : " << fibo(n) << endl;
    return 0;
}