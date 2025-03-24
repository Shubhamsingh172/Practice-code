#include <iostream>
using namespace std;

int fact(int n)
{
    if(n == 1)
        return 1;
    return n * fact(n - 1);
}
int sum(int n)
{
    if(n == 1)
    {
        cout << "1! + ";
        return 1;
    }
    int ans = fact(n) + sum(n - 1);
    cout << n << "! + ";
    return ans;
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