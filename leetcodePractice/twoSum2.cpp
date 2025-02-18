#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            int i = 0;
            int j = numbers.size() - 1;
            while (i < j) {
                if (numbers[i] + numbers[j] < target)
                    i++;
                else if (numbers[i] + numbers[j] > target)
                    j--;
                else if (numbers[i] + numbers[j] == target)
                {
                    return {i + 1, j + 1};
                }
            }
            return {};
        }
    };

    int main()
    {
        Solution s;
        int target;
        cout << "\nEnter the target : ";
        cin >> target;
        vector<int>nums{2,7,11,15};
        vector<int>result = s.twoSum(nums, target);
        for(auto &it : result)
            cout << it << " ";
        cout << endl;
        return 0;
    }