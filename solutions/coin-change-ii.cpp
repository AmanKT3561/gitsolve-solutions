// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Coin Change II
// URL        : https://leetcode.com/problems/coin-change-ii/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-09-30T23:24:24.601Z

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int g = 0;
        for (int c : coins) g = gcd(g, c);
        if (amount % g != 0) return 0;
        amount /= g;
        for (int &c : coins) c /= g;

        vector<long long> dp(amount + 1, 0);
        dp[0] = 1;
        for (int c : coins) {
            for (int j = c; j <= amount; ++j) {
                dp[j] += dp[j - c];    
            }
        }
        return (int)dp[amount];
    }
};
