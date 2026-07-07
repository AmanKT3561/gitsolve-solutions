// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Concatenate Non-Zero Digits and Multiply by Sum I
// URL        : https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
// Difficulty : Easy
// Language   : cpp
// Saved at   : 2026-07-07T07:05:33.591Z

class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0, s = 0;
        for (char c : to_string(n))
            if (c != '0')
                x = x * 10 + c - '0', s += c - '0';
        return x * s;
    }
};