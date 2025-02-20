#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an odd number of rows : ";
    cin >> n;
    for(int i = 1; i <= n / 2 + 1; i++)
    {
        for(int j = 1; j <= n * 2; j++)
        {
            if(j <= (n * 2) + 1 - ( 2 * i)) // here bracket is just for understanding 
                cout << " ";
            else 
                cout << "* ";
        }
        cout << endl;
    }
    for(int i = 1; i <= n / 2; i++)
    {
        for(int j = 1; j <= n * 2; j++)
        {
            if(j <= n + (i * 2))
                cout << " ";
            else 
                cout << "* ";
        }
        cout << endl;
    }
}