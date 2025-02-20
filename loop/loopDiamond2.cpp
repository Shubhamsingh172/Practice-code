#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an odd number of rows : ";
    cin >> n;
    for(int i = 1; i <= n / 2 + 1; i++)
    {
        cout.width(n * 2 - i * 2);
        for(int j = 1; j <= i * 2 - 1; j++)
            cout << "* ";
        cout << endl;
    }
    for(int i = 1; i <= n / 2; i++)
    {
        cout.width((n - 1) + i * 2);
        for(int j = 1; j <= n - 2 * i; j++)
            cout << "* ";
        cout << endl;
    }
}