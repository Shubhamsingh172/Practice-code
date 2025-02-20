#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter an odd number of rows : ";
    cin >> n;
    cout << endl;
    for(int i = 1; i <= n / 2 + 1; i++)
    {
        for(int j = 1; j <= (n + 1) - 2 * i ; j++)
            cout << " ";
        
        for(int j = 1; j <= i * 2 - 1; j++)
            cout << "* ";

        cout << endl;
    }
    for(int i = 1; i <= n / 2; i++)
    {
        for(int j = 1; j <= i * 2; j++)
            cout << " ";
        
        for(int j = 1; j <= n - 2 * i; j++)
            cout << "* ";
        cout << endl;
    }
    cout << endl;
    return 0;
}