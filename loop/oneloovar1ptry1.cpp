#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 25; i++)
    {
        cout.width(4);
        if(i % 5)
        {
            cout << i << " ";
        }
        else 
        {
            cout << i << " ";
            cout << endl;
        }
    }
}