// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Minimum Add to Make Parentheses Valid
// URL        : https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-10-06T16:14:39.359Z

class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char> st;
       int ans=0;
       int cnt = 0;
        for(int i=0;i<s.size();i++)
        {
          if(s[i] =='(') cnt++;
          else
          {
            if(cnt > 0) cnt--;
            else ans++;
          } 
       }
        
        
        return ans+cnt;
    }
};