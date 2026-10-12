// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Apply Operations on Array to Maximize Sum of Squares
// URL        : https://leetcode.com/problems/apply-operations-on-array-to-maximize-sum-of-squares/
// Difficulty : Hard
// Language   : cpp
// Saved at   : 2026-10-12T20:06:30.494Z

class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const long long MOD = 1e9 + 7;
        int cnt[30] = {};  
        for (int x : nums)
            for (int b = 0; b < 30; b++) cnt[b] += x >> b & 1;
        long long total = 0;
        for (int i = 0; i < k; i++) {  
            long long row = 0;
            for (int b = 0; b < 30; b++)
                if (cnt[b] > i) row |= 1LL << b;  
            total = (total + row * row) % MOD;
        }
        return total;
    }
};