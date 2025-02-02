#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int rows;
    cout << "Enter odd no. of rows : ";
    cin >> rows;
    for(int i = 1; i <= rows / 2 + 1; i++)
    {
        cout.width(rows * 2 - i * 2);
        for(int j = 1; j <= i * 2 - 1; j++)
            cout << "* ";
        cout << endl;
    }
    for(int i = 1; i <= rows / 2; i++)
    {
        cout.width((rows - 1) + i * 2);
        for(int j = 1; j <= rows - 2 * i; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}