// class Solution {
//     public:
//         int longestNiceSubarray(vector<int>& nums) {
//             using O(n^2) approach 
//             int result = 0;
//             for(int i = 0; i < nums.size(); i++)
//             {
//                 int mask = 0;
//                 for(int j = i; j < nums.size(); j++)
//                 {
//                     if(mask & nums[j] != 0)
//                         break;
//                     mask |= nums[j];
//                     result = max(result, j - i + 1); 
//                 }
//             }
//             return result;
//         }
//     };