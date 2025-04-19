// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int val = 0;
    int temp = 4;
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for(int i = 1, j = 1; i <= n;)
    {
        if(j <= i)
        {
            if(j * i == i) 
            {
                cout << i << " ";
                j++;
            }
            else 
            {
                val += temp;
                cout << val << " ";
                temp--;
                j++;
            }
        }
        else 
        {
            j = 1;
            val = 1;
            val += i;
            temp = 4;
            cout << endl;
            i++;
        }
    }
    
    return 0;
}

/*
1
2 6
3 7 10
4 8 11 13
*/