// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Minimum Insertions to Balance a Parentheses String
// URL        : https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-10-09T19:36:47.282Z

class Solution {
public:
    int minInsertions(string s) {
        int ans = 0, x = 0;
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            if (s[i] == '(') {
                ++x;
            } else {
                if (i < n - 1 && s[i + 1] == ')') {
                    ++i;
                } else {
                    ++ans;
                }
                if (x == 0) {
                    ++ans;
                } else {
                    --x;
                }
            }
        }
        ans += x << 1;
        return ans;
    }
};