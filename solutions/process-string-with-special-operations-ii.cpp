// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Process String with Special Operations II
// URL        : https://leetcode.com/problems/process-string-with-special-operations-ii/
// Difficulty : Hard
// Language   : cpp
// Saved at   : 2026-06-17T16:57:40.177Z

class Solution {
public:
    char processStr(string s, long long k) {
        long long len = 0;

        for (char c : s) {
            if (c == '*') {
                len = max(0LL, len - 1);
            }
            else if (c == '#') {
                len *= 2;
            }
            else if (c != '%') {
                len++;
            }
        }

        if (k >= len) return '.';

        for (int i = (int)s.size() - 1; i >= 0; i--) {
            char c = s[i];

            if (c == '*') {
                len++;
            }

            else if (c == '#') {
                long long half = len / 2;

                if (k >= half) {
                    k -= half;
                }

                len = half;
            }

            else if (c == '%') {
                k = len - 1 - k;
            }

            else {
                if (k == len - 1) {
                    return c;
                }
                len--;
            }
        }

        return '.';
    }
};