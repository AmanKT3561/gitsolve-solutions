// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Word Break
// URL        : https://leetcode.com/problems/word-break/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-10-09T19:42:57.939Z

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size()+1, 0);
        dp[0] = true;
        unordered_set<string> set(wordDict.begin(), wordDict.end());
        for(int i=1; i<=s.size(); i++){
            for(int j=0; j<i; j++){
                if(dp[j] && set.count(s.substr(j, i-j))){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};