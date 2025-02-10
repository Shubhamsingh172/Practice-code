#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int miss = 0;
        for(int i = 1; i <= nums.size(); i++)
        {
            sum += i;
            miss += nums[i - 1];
        }
        return sum - miss;
    }
};

int main()
{
    vector<int>nums{3,0,1};
    Solution s;
    cout << "Missing number in the array is : " << s.missingNumber(nums) << endl;
    cout << endl;
    return 0;
}