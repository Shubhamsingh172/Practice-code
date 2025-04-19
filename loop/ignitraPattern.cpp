// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int temp = 4;
        int val = i;
        for(int j = 1; j <= i; j++)
        {
            if(i == j * i) cout << val << " ";
            else 
            {
                val += temp;
                cout << val << " ";
                temp--;
            }
        }
        cout << endl;
    }
    
    return 0;
}

/*
1
2 6
3 7 10
4 8 11 13
*/