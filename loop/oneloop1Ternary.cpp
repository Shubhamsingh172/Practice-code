#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << endl;
    for(int i = 1, spaces = n; i <= n;(spaces >= 1) ? (cout << spaces << " ",spaces--) : (cout << endl, spaces = n - i, i++));
    cout << endl;
}