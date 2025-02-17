#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        int countPairs(vector<int>& nums, int target) {
            int count = 0;
            for(int i = 0; i < nums.size(); i++)
            {
                for(int j = i + 1; j < nums.size(); j++)
                {
                    if(nums[i] + nums[j] < target)
                        count++;
                }
            }
            return count;
        }
    };

    int main()
    {
        Solution s;
        vector<int>nums{-1,1,2,3,1};
        int target;
        cout << "Enter the target : ";
        cin >> target;
        cout << "The number of the pairs whose sum is less than target is : " << s.countPairs(nums, target) << endl;
        return 0;
    }