#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int target;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < nums[nums.size() - 1] && nums[i] > nums[0])
            {
                target = nums[i];
                return target;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    vector<int>nums{3,1,2,4};
    cout << "The element of an array which is neither maximum nor minimum : " << s.findNonMinOrMax(nums) << endl;
    return 0;
}