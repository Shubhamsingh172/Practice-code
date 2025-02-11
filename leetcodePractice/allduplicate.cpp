#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int>result;
       int i = 0;
       int j = i + 1;
       sort(nums.begin(), nums.end());
       while(j < nums.size())
       {
            if(nums[i] == nums[j])
                result.push_back(nums[i]);
            i++;
            j++;
       }
       return result;
    }
};
int main()
{
    vector<int>nums{2,3,4,2,36,8,9,3};
    Solution s;
    vector<int>result = s.findDuplicates(nums);
    for(auto &val : result)
    {
        cout << val << endl;
    }

}