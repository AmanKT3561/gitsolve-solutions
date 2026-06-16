// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Process String with Special Operations I
// URL        : https://leetcode.com/problems/process-string-with-special-operations-i/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-06-16T05:36:04.455Z

class Solution {
public:
    string processStr(string s) {
        string res;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if (ch == '*') {
                if (res.length() != 0) {
                    res.pop_back();
                }
            } 
            else if (ch == '#') {
                res += res;
            } 
            else if (ch == '%') {
                reverse(res.begin(), res.end());
            } 
            else if (ch >= 'a' && ch <= 'z') {
                res.push_back(ch);
            }
        }

        return res;
    }
};