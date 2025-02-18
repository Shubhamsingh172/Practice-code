#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        double minimumAverage(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            double smallAvg = 2147483647;
            int i = 0;
            int j = nums.size() - 1;
            while(i < j)
            {
                if((double(nums[i] + nums[j])) / 2 < smallAvg)
                    smallAvg = double(nums[i] + nums[j]) / 2;
                i++;
                j--;
            }
            return smallAvg;
        }
    };

    int main()
    {
        Solution s;
        vector<int>nums{7,8,3,4,15,13,4,1};
        cout << "\nMinimum Average of the Smallest and Largest Element is : " << s.minimumAverage(nums);
        cout << endl;
        return 0;
    }