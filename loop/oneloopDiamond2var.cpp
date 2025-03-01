// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the odd number of rows : ";
    cin >> n;
    for(int i = 1, spaces = 1; i <= n;)
    {
        if(i <= n / 2 + 1)
        {
            if(spaces <= (n / 2 + 1) * 2 + 1 - (i * 2))
            {
                cout << " ";
                spaces++;
            }
            else 
            {
                if(spaces < (n / 2 + 1 ) * 2 + 1)
                {
                    cout << "* ";
                    spaces++;
                }
                else
                {
                    spaces = 1;
                    cout << endl;
                    i++;
                }
            }
        }
        else
        {
            if(spaces <= i * 2 - n)
            {
                cout << " ";
                spaces++;
            }
            else
            {
                if(spaces <= (n / 2 + 1) * 2)
                {
                    cout << "* ";
                    spaces++;
                }
                else
                {
                    spaces = 1;
                    cout << endl;
                    i++;
                }
            }
        }
    }
    return 0;
}