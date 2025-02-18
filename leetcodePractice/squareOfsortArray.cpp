#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            for(int i = 0; i < nums.size(); i -= -1)
            {
                nums[i] *= nums[i]; 
            }
            sort(nums.begin(), nums.end());
            return nums;
        }
    };

int main()
{
    Solution s;
    vector<int>nums{-4,-3,0,6,9};
    vector<int>result = s.sortedSquares(nums);
    for(auto &it : result)
        cout << it << " ";
    cout << endl;
    return 0;
}