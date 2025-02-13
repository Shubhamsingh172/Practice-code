#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        vector<int> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
                result.push_back(i);
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int>nums{1,2,5,2,3};
    vector<int>result = s.targetIndices(nums, 2);
    for(auto &val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}