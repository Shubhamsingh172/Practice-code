#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ii = 1;
    cout << "Prime numbers are\n";
    while (ii <= n)
    {
        int j = 1;
        int count = 0;
        while (j <= ii)
        {
            if (ii % j == 0)
                count++;
            j++;
        }
        if (count == 2)
            cout << ii << " ";
        ii++;
    }

    // second approach

   // Online C++ compiler to run C++ program online
    int nn;
    cout << "\n\nEnter a range for prime number you want : ";
    cin >> nn;
    int i = 2;
    cout << "\nPRIME NUMBERS ARE\n\n";
    
    while(i <= nn)
    {
        int j = 2;
        while(j <= i/2)   
        {
            if(i % j == 0)
                break;
            j++;
        }
        if(j == i / 2 + 1) 
            cout << i << " ";
        i++;
    }
    return 0;
}