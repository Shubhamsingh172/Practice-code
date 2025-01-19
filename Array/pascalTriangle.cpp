// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


int main() {
    // Write C++ code here
    int n;
    cout << "Enter the number for pascal triangle : ";
    cin >> n;
    vector<vector<int>>result(n);
    for(int i = 0; i < n; i++)
    {
        result[i] = vector<int>(i + 1, 1);
        for(int j = 1; j < i; j++)
            result[i][j] = result[i-1][j] + result[i-1][j-1];
    }
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i+1; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}