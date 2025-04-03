// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int>nums{1,2,3,4,5};
//     vector<int>result(nums.size());
//     int d = 2;
    
//     cout << "Array before Rotation" << endl;
//     for(int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i] << " ";
//     }
//     for(int i = 0; i < nums.size(); i++)
//     {
//         result[(i + d) % nums.size()] = nums[i];
//     }
    
//     cout << "Array after Rotation" << endl;
    
//     for(int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << " ";
//     }
//     return 0;
// }

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr{1,2,3,4,5};
    vector<int>result = arr;
    int d;
    cout << "Enter the rotation number : ";
    cin >> d;
    
    cout << "Array before rotation." << endl;
    for(int i = 0; i < arr.size(); i++)
    {
        cout << result[i] << " ";
    }
    
    for(int i = 0; i < arr.size(); i++)
    {
        result[(arr[i] + d) % arr.size()] = arr[i];
    }
    
    cout << "\nArray after rotation." << endl;
    for(int i = 0; i < arr.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}