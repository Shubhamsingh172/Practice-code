#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an odd number of rows : ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n * 2; j++)
        {
            if(i <= n / 2 + 1)
            {
                if(j <= n * 2 + 1 - (2 * i))
                    cout << " ";
                else
                    cout << "* ";
            }
            else 
            {
                if(j <= i * 2 - 1)
                    cout << " ";
                else   
                    cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}