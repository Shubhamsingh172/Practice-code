#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
                return true;
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int>nums{2,5,6,0,0,1,2};
    int target;
    cout << "Enter target for searching in a rotated sorted array : ";
    cin >> target;
    cout << "\nTargeted element present in the array is : " << s.search(nums, target) << endl;
    return 0;
}