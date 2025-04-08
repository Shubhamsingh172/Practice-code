#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number rows : ";
    cin >> n;
    for(int i = 1, spaces = 1; i <= n;)
    {
        if(i <= n / 2 + 1)
        {
            if(spaces < i  || spaces > n + 1 - i)
            {
                cout << "  ";
                spaces++;
            }
            else 
            {
                cout << "* ";
                spaces++;
            }
            if(spaces == n + 1)
            {
                cout << endl;
                spaces = 1;
                i++;
            }
        }
        else 
        {
            if(spaces < n + 1 - i || spaces > i)
            {
                cout << "  ";
                spaces++;
            }
            else 
            {
                cout << "* ";
                spaces++;
            }
            if(spaces == n + 1)
            {
                cout << endl;
                spaces = 1;
                i++;
            }
        }
    }
}