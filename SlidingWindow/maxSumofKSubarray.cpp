// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    vector<int>arr{2,5,1,8,2,9,1};
    int k = 3;
    int mx = 0;
    int i = 0;
    int j = 0;
    int let = 0;
    cout << "mx" << "\t";
    cout << "i" << "\t";
    cout << "j" << "\t";
    cout << endl;
    while(j < arr.size())
    {
        let += arr[j];
        if(j - i + 1 > k)
        {
            let -= arr[i];
            i++;
        }
        mx = max(let, mx);
        cout << mx << "\t" << i << "\t" << j << "\t" << endl;
        j++;
    }
    cout << "Maximum sum of the window of 3 size is : " << mx << endl;
    return 0;
}