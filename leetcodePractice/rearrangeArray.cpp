#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            vector<int>positive;
            vector<int>negative;
    
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] >= 1)
                    positive.push_back(nums[i]);
                else
                    negative.push_back(nums[i]);
            }
            
            int posIndex = 0;
            int negIndex = 0;
            vector<int>result;
            for(int i = 0; i < nums.size(); i++)
            {
                if(i % 2 == 0 && posIndex < positive.size())
                    result.push_back(positive[posIndex++]);
                else if(negIndex < negative.size())
                    result.push_back(negative[negIndex++]);
            }
            return result;
        }
    };

    int main()
    {
        Solution s;
        vector<int>nums{3,-2,-1,4,5,-10};
        vector<int>result = s.rearrangeArray(nums);
        for(auto &it : result)
            cout << it << " ";
        cout << endl;
        return 0;
    }