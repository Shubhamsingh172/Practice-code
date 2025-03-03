#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an odd number of rows : ";
    cin >> n;
    for(int i = 1, spaces = 1; i <= n;)
    {
        if(i <= n / 2 + 1)
        {
            if(spaces <= (n / 2 + 1) - i + 1)
            {
                cout << spaces << "  ";
                spaces++;
            }
            else if((n / 2 + 1) * 2 - spaces <= (n / 2 + 1) - i + 1)
            {
                cout << (n / 2 + 1) * 2 - spaces << "  ";
                spaces++;
            }
            else 
            {
                cout << "   ";
                spaces++;
            }
            if(spaces > n)
            {
                cout << endl;
                spaces = 1;
                i++;
            }
        }
        else
        {
            if(spaces <= i - (n / 2))
            {
                cout << spaces << "  ";
                spaces++;
            }
            else if((n / 2 + 1) * 2 - spaces <= i - n / 2)
            {
                cout << (n / 2 + 1) * 2 - spaces << "  ";
                spaces++;
            }
            else 
            {
                cout << "   ";
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
}