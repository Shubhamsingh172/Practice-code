#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            vector<int>result(nums.size(), 0);
            int k = 0;
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] != 0)
                    result[k++] = nums[i];
            }
            nums = result;
        }
    };
    int main()
    {
        Solution s;
        vector<int>nums{0,1,0,2,0,3};
        s.moveZeroes(nums);
        for(auto &it : nums)
            cout << it << " ";
        cout << endl;
        return 0;
    }
    
    