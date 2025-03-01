// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the odd number of rows : ";
    cin >> n;
    for(int i = 1, spaces = 1, star = 1; i <= n;)
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
                if(star <= i * 2 - 1)
                {
                    cout << "* ";
                    star++;
                }
                else
                {
                    spaces = 1;
                    star = 1;
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
                if(star <= (n * 2) + 1 - (i * 2))
                {
                    cout << "* ";
                    star++;
                }
                else
                {
                    spaces = 1;
                    star = 1;
                    cout << endl;
                    i++;
                }
            }
        }
    }
    return 0;
}