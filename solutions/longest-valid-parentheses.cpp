// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Longest Valid Parentheses
// URL        : https://leetcode.com/problems/longest-valid-parentheses/
// Difficulty : Hard
// Language   : cpp
// Saved at   : 2026-06-26T12:08:39.030Z

class Solution {
public:
    int longestValidParentheses(string s) {
        int l = 0;
        int r = 0;
        int ans = 0;

        for (auto i : s) {
            if (i == '(')
                l++;
            else
                r++;

            if (l == r)
                ans = max(ans, l + r);
            if (r > l) {
                l = 0;
                r = 0;
            }
        }
        l = 0 ; r= 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ')')
                r++;
            else
                l++;
            if (l == r)
                ans = max(ans, l + r);
            if (l > r) {
                l = 0;
                r = 0;
            }
        }
        return ans;
    }
};