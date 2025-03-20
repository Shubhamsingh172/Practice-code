// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int>arr{12,-1,-7,8,-15,30,16,38};
    list<int>lis;
    vector<int>result;
    int k = 3;
    int i = 0;
    int j = 0;
    while(j < arr.size())
    {
        if(arr[j] < 0)
            lis.push_back(arr[j]);
        
        if(j - i + 1 >= k)
        {
            if(lis.empty())
                result.push_back(0);
            else 
                result.push_back(lis.front());
            
            if(!lis.empty() && arr[i] == lis.front())
                lis.pop_front();
            i++;
        }
        j++;
    }
    for(int k = 0; k < result.size(); k++)
    {
        cout << result[k] << " ";
    }
    cout << endl;
    return 0;
}