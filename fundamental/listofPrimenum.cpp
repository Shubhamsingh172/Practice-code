// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cout << "Enter a number : ";
    cin >> n;
    // int count = 0;
    // for(int i = 1; i <= n; i++)
    // {
    //     if(n % i == 0)
    //         count++;
    // }
    // if(count == 2)
    //     cout << n << " is a prime number." << endl;
    
    int i = 2;
    while(i <= n/2)
    {
        if(n % i == 0)
            break;
        i++;
    }
    if(i == n/2+1)
        cout << n << " is a prime number." << endl;
    else 
        cout << n << " is not a prime number." << endl;
    return 0;
}