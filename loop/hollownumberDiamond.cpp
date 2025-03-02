#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the odd number of rows : ";
    cin >> n;
    for(int i = 1, spaces = 1; i <= n;)
    {
        if(i <= n / 2 + 1)
        {
            if(spaces == n / 2 + i || spaces == (n / 2 + 1) * 2 - (n / 2 + i))
            {
                cout << i << " ";
                spaces++;
            }
            else if(spaces <= n / 2 + 1 - i)
            {
                cout << "  ";
                spaces++;
            }
            else
            {
                cout << "  ";
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
            if(spaces ==  i - (n / 2) || spaces == (n / 2 + 1) * 2 - (i - (n / 2)))
            {
                cout << (n / 2 + 1) * 2 - i << " ";
                spaces++;
            }
            else if(spaces <= i - (n / 2 + 1))
            {
                cout << "  ";
                spaces++;
            }
            else 
            {
                cout << "  ";
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

/*
Enter the odd number of rows : 9
        1         
      2   2       
    3       3     
  4           4   
5               5 
  4           4   
    3       3     
      2   2       
        1         
*/