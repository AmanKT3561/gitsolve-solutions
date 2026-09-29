// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Find All Anagrams in a String
// URL        : https://leetcode.com/problems/find-all-anagrams-in-a-string/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-09-29T21:01:56.971Z

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int> hash(26 , 0) , a(26 , 0);
       for(auto i:p) hash[i-'a']++;
       vector<int> ans;
       for(int i = 0 ; i< p.size() ; i++) a[s[i] - 'a']++;
       if(hash == a) ans.push_back(0);

       for(int i = p.size() ; i<s.size() ; i++){
        a[s[i-p.size()] - 'a']--;
        a[s[i] - 'a']++;
        if(a == hash) ans.push_back(i-p.size() + 1);
       }
       return ans;
    }
};