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

    int i = 2;
    while (i <= n / 2)
    {
        if (n % i == 0)
            break;
        i++;
    }
    if (i == n / 2 + 1)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
    return 0;
}