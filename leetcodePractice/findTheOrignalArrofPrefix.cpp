// class Solution {
//     public:
//         vector<int> findArray(vector<int>& pref) {

                // solved by own
//             // int sum = 0;
//             // for(int i = 1; i <= pref.size() - 1; i++)
//             // {
//             //     sum = pref[i - 1] ^ pref[i];
//             //     pref[i] = sum;
//             // }
//             // return pref;
    
//             // watched approach  // second approach 
//             int prev = pref[0];
//             for(int i = 1; i <= pref.size() - 1; i++)
//             {
//                 int present = pref[i];
//                 pref[i] = prev ^ present;
//                 prev = present;
//             }
//             return pref;
//         }
//     };