// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Maximum Number of Balloons
// URL        : https://leetcode.com/problems/maximum-number-of-balloons/
// Difficulty : Easy
// Language   : cpp
// Saved at   : 2026-06-22T05:56:53.930Z

class Solution {
public:
    int maxNumberOfBalloons(string t) {
        int f[5] = {0};
        string s = "balon";

        for (uint32_t ch : t)
            for (int i = 0; i < 5; i++)
                f[i] += !(ch ^ s[i]);

        return min({f[0], f[1], f[2] >> 1, f[3] >> 1, f[4]});
    }
};