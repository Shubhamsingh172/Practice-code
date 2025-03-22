// class Solution {
//     public:
//         bool isVowel(char ch)
//         {
//             return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
//         }
//         long long countOfSubstrings(string word, int k) {
//             int n = word.length();
//             unordered_map<char, int>mp; // to keep count of vowel count in current window.
    
//             //pre-processing the index of just next consonant index in the word string 
//             vector<int>nextCons(n);
//             int lastIndex = n;
    
//             for(int i = n - 1; i >= 0; i--)
//             {
//                 nextCons[i] = lastIndex;
//                 if(!isVowel(word[i]))
//                     lastIndex = i;
//             }
    
//             int i = 0;
//             int j = 0;
//             long long count = 0;
//             int cons = 0;
    
//             while(j < n)
//             {
//                 char ch = word[j];
//                 if(isVowel(ch))
//                     mp[ch]++;
//                 else 
//                 {
//                     cons++;
//                 }
                
//                 //constant must be always cons == k
//                 while(cons > k) // shrinking the window
//                 {
//                     char ch = word[i];
//                     if(isVowel(ch))
//                     {
//                         mp[ch]--;
//                         if(mp[ch] == 0) // then delete the character from the map and shrinks it
//                         {
//                             mp.erase(ch);
//                         }
//                     }
//                     else
//                     {
//                         cons--;
//                     }
//                     i++;
//                 }
    
//                 while(i < n && mp.size() == 5 && cons == k) // it means the valid window
//                 {
//                     int idx = nextCons[j];
//                     count += idx - j;
//                     char ch = word[i];
//                     if(isVowel(ch))
//                     {
//                         mp[ch]--;
//                         if(mp[ch] == 0)
//                         {
//                             mp.erase(ch);
//                         }
//                     }
//                     else 
//                     {
//                         cons--;
//                     }
//                     i++;
//                 }
//                 j++;
//             }
//             return count;
//         }
//     };