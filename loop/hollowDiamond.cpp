#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number for hollow Diamond : ";
    cin >> n;
    for(int i = 1, spaces = 1; i <= n * 2 - 1;)
    {
        if(i <= n)   
        {
            if(spaces <= n - i + 1)
            {
                cout << spaces << " ";
                spaces++;
            }
            else if(n * 2 - spaces <= n - i + 1)
            {
                cout << n * 2 - spaces << " ";
                spaces++;
            }
            else
            {
                cout << "  ";
                spaces++;
            }
            if(spaces == n * 2)
            {
                cout << endl;
                spaces = 1;
                i++;
            }
        }     
        else
        {
            if(spaces <= i - n  + 1)
            {
                cout << spaces << " ";
                spaces++;
            }
            else if(n * 2 - spaces <= i - n + 1)
            {
                cout << n * 2 - spaces << " ";
                spaces++;
            }
            else
            {
                cout << "  ";
                spaces++;
            }
            if(spaces == n * 2)
            {
                cout << endl;
                spaces = 1;
                i++;
            }
        }     
    }
}