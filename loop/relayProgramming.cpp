// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the odd number : ";
    cin >> n;
   for(int i = 1; i <= n / 2 + 1; i++)
   {
       for(int j = 1; j <= (n / 2 + 1) - i; j++)
            cout << "  ";
       for(int j = 1; j <= i; j++)
       {
           if(i == j + 1 && i == n / 2 + 1)
               cout << " +  ";
           else 
               cout << " *  ";
       }
       cout << endl;
   }
   for(int i = 1; i <= n / 2; i++)
   {
       for(int j = 1; j <= i; j++)
            cout << "  ";
       for(int j = 1; j <= (n/ 2 - i + 1); j++)
            cout << " *  ";
       cout << endl;
   }
}