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
            if(spaces <= (n + 1) - (i * 2) + 1)
            {
                cout << "* ";
                spaces++;
            }
            else 
            {
                cout << " ";
                spaces++;
            }
            if(spaces == n + 1)
            {
                cout << endl;
                spaces = 1;
                i++;
            }
        }
        break;
    }
}