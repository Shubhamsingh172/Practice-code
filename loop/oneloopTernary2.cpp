#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for(int i = 1, spaces = 1; i <= n; (spaces <= n - i + 1) ? (cout << spaces << " ", spaces++): (cout << endl, spaces = 1, i++));
}