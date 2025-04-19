#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the odd number of dimension : ";
    cin >> n;
    int spiral[20][20];
    int k = 1;
    for(int iter = 0; iter < n/2 + 1; iter++)
    {
        for(int j = iter; j <= n - 1 - iter; j++)
            spiral[iter][j] = k++;
        
        for(int j = iter + 1; j <= n - iter - 1; j++)
            spiral[j][n - 1 - iter] = k++;
        
        for(int j = n - 2 - iter; j >= iter; j--)
            spiral[n - 1 - iter][j] = k++;
        
        for(int j = n - 2 - iter; j > iter; j--)
            spiral[j][iter] = k++;
    }
    
    cout <<"\nSpiral Pattern is" << endl;
    for(int i = 0; i < n; i++)
    {
        cout.width(6);
        for(int j = 0; j < n; j++)
            cout << spiral[i][j] << " ";
        cout << endl;
    }
}