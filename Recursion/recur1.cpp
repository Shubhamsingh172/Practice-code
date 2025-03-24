#include <iostream>
using namespace std;

int fact(int n)
{
    if(n == 1)
        return n;
    return n * fact(n - 1);
}
int sum(int n)
{
    cout << n << "! + ";
    if(n == 1)
        return 1;
    return fact(n) + sum(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int ans = sum(n);
    cout << "\b\b\b = " << ans << endl;
    return 0;
}