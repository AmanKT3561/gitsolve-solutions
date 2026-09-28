// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Maximum Nesting Depth of the Parentheses
// URL        : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
// Difficulty : Easy
// Language   : cpp
// Saved at   : 2026-09-28T14:57:20.904Z

class Solution {
public:
    int maxDepth(string s) {
     int ans = 0;
     int cnt = -1;
     for(auto i:s)
     {
      if(i == '(') ans++;
      else if(i == ')') ans--;
      cnt = max(ans , cnt);
     }   
     return cnt;
    }
};