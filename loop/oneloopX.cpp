#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the odd number of rows : ";
    cin >> n;
    for(int i = 1, spaces = 1; i <= n;)
    {
        if(spaces == i || spaces == n - i + 1)
        {
            cout << "* ";
            spaces++;
        }
        else 
        {
            cout << "  ";
            spaces++;
        }
        if(spaces > n)
        {
            cout << endl;
            spaces = 1;
            i++;
        }
    }
}