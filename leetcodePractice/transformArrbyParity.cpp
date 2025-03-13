// class Solution {
//     public:
//         vector<int> transformArray(vector<int>& nums) {
//             // vector<int>result;
//             // for(int i = 0; i < nums.size(); i++)
//             // {
//             //     if(nums[i] % 2)
//             //         result.push_back(1);
//             //     else
//             //         result.push_back(0);
//             // }
//             // sort(result.begin(), result.end());
//             // return result;
    
//             //this is optimal code above one is my code 
//             for(int i = 0; i < nums.size(); i++)
//                 nums[i] = nums[i] % 2;
//             sort(nums.begin(),nums.end());
//             return nums;
//         }
//     };