// class Solution {
//     public:
//         int numberOfSubarrays(vector<int>& nums, int k) {
//             // unordered_map<int , int>mp;
//             // int oddcount = 0;
//             // int result = 0;
//             // int n = nums.size();
//             // mp[oddcount] = 1; // it indicates that we have seen 1 in the past 
//             // for(int i = 0; i < nums.size(); i++)
//             // {
//             //     oddcount += nums[i] % 2;
//             //     if(mp.count(oddcount - k))
//             //         result += mp[oddcount - k];
//             //     mp[oddcount]++;
//             // }
//             // return result;
            
//             //second solution 
//             int oddcount = 0;
//             int prevcount  = 0;
//             int result = 0;
//             int i = 0;
//             int j = 0;
//             while(j < nums.size())
//             {
//                 if(nums[j] % 2 != 0) // odd
//                 {
//                     oddcount++;
//                     prevcount = 0;
//                 }
//                 while(oddcount == k)
//                 {
//                     prevcount++;
//                     if(i < nums.size() && nums[i] % 2 == 1)
//                         oddcount--;
//                     i++;
//                 }
//                 result += prevcount;
//                 j++;
//             }
//             return result;
    
    
//         }
//     };