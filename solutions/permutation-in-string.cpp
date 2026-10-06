// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Permutation in String
// URL        : https://leetcode.com/problems/permutation-in-string/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-10-06T22:29:51.078Z

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> hash(26, 0);
        for (auto i : s1)
            hash[i - 'a']++;

        if(s1.size() > s2.size()) return 0;    

        vector<int> mp(26, 0);

        for (int i = 0; i < s1.size(); i++)
            mp[s2[i] - 'a']++;

        if (hash == mp)
            return 1;

        for (int i = s1.size(); i < s2.size(); i++) {
            mp[s2[i - s1.size()] - 'a']--;
            mp[s2[i] - 'a']++;
            if (hash == mp)
                return 1;
        }
        return 0;
    }
};