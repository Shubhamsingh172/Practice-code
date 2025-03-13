// class Solution {
//     public:
//         int minPairSum(vector<int>& nums) {
//             sort(nums.begin(), nums.end());
//             int maxi = 0;
//             int i = 0;
//             while(i < nums.size() - i - 1)
//             {
//                 maxi = max(nums[i] + nums[nums.size() - i - 1],maxi);
//                 i++;
//             }
//             return maxi;
//         }
//     };