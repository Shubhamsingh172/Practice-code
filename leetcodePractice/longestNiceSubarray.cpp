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


// solution using sliding window approach 
//using sliding window approach 
// int i = 0;
// int j = 0;
// int mask = 0;
// int result = 1;
// while(j < nums.size())
// {
//     while((mask & nums[j]) != 0) // keep shrinking the window 
//     {
//         mask ^= nums[i]; // or mask = (mask ^ nums[i]) like this 
//         i++;
//     }
//     result = max(result, j - i + 1);
//     mask |= nums[j]; // or mask = (mask | nums[j]);
//     j++;
// }
// return result;