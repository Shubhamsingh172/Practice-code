// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num1, num2;
    cout << "Enter number for GCD : ";
    cin >> num1 >> num2;
    int n;
    if(num1 < num2)
        n = num1;
    else 
        n = num2;
    
    cout << "\nGreatest Common Integer\n\n";
    for(int i = 1; i <= n; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}