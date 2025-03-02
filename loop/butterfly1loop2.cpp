// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cout << "Enter the odd number of rows : ";
    cin >> n;
    for(int i = 1, spaces = 1; i <= n;)
    {
        if(i <= n / 2 + 1)
        {
            if(spaces <= i)
            {
                cout << spaces << " ";
                spaces++;
            }
            else if((n / 2 + 1) * 2 - spaces <= i)
            {
                cout << (n / 2 + 1) * 2 - spaces << " ";
                spaces++;
            }
            else 
            {
                cout << "  ";
                spaces++;
            }
            if(spaces == (n / 2 + 1) * 2)
            {
                cout << endl;
                spaces = 1;
                i++;
            }
        }
        else
        {
            if(spaces <= (n / 2 + 1) * 2 - i)
            {
                cout << spaces << " ";
                spaces++;
            }
            else if((n / 2 + 1) * 2 - spaces <= (n / 2 + 1) * 2 - i)
            {
                cout << (n / 2 + 1) * 2 - spaces << " ";
                spaces++;
            }
            else 
            {
                cout << "  ";
                spaces++;
            }
            if(spaces == (n / 2 + 1) * 2)
            {
                cout << endl;
                spaces = 1;
                i++;
            }
        }
        
    }
    return 0;
}