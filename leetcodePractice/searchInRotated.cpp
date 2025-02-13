#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
                return i;
        }
        return -1;
    }
};

int main()
{
    Solution s;
    vector<int>nums{4,5,6,7,0,1,2};
    int target;
    cout << "Enter a target for searching : ";
    cin >> target;
    cout << "\nIndex of Targeted element is : " << s.search(nums, target) << endl;
    return 0;
}