// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Minimum Operations to Make Array Equal
// URL        : https://leetcode.com/problems/minimum-operations-to-make-array-equal/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-07-09T20:39:13.541Z

class Solution {
public:
    int minOperations(int n) {
        long long ans = 0;
        if (n % 2) {
            int x = n;
            while (n != 1) {
                n -= 2;
                ans += x - n;
            }
        } else {
            int x = n;
            n--;
            ans++;
            while (n != 1) {
                n -= 2;
                ans += x - n;
            }
        }
        return (int)ans;
    }
};