#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    for(int i = 1, spaces = 1; i <= n;)
    {
        if(spaces <= i)
        {
            cout << spaces << " ";
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