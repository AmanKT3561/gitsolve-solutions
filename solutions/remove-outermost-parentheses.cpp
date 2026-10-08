// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Remove Outermost Parentheses
// URL        : https://leetcode.com/problems/remove-outermost-parentheses/
// Difficulty : Easy
// Language   : cpp
// Saved at   : 2026-10-08T10:26:16.186Z

class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string t= "";
        for(auto i:s)
        {
          if(i == ')') cnt--;
          if(cnt != 0) t+=i;
          if(i == '(') cnt++;
        }
        return t;
    }
};