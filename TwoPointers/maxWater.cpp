#include <bits/stdc++.h>
using namespace std;

int maxxWater(vector<int>& arr)
{
    int n = arr.size();
    int i = 0;
    int j = n - 1;
    int maxWater = -1;
    while(i < j)
    {
        int w = j - i;
        int h = min(arr[i], arr[j]);
        int area = w * h;

        maxWater = max(area, maxWater);
        if(arr[i] > arr[j])
            j--;
        else
            i++;
    }
    return maxWater;
}

int main()
{
    vector<int> arr{1,8,6,2,5,4,8,3,7};
    int maxWater = maxxWater(arr);
    cout << "\nMaxWater Area is equals to : " << maxWater << endl;
}