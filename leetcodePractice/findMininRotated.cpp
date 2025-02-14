#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        // int mini = *min_element(nums.begin(), nums.end());
        int mini = 100000000;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < mini)
                mini = nums[i];
        }
        return mini;
    }
};

int main()
{
    Solution s;
    vector<int>nums{1,2,3,0,4,5,6,-1};
    cout << "Minimum Element in the Rotated sorted array is : " << s.findMin(nums) << endl;
    return 0;
}