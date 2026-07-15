// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Count the Number of Beautiful Subarrays
// URL        : https://leetcode.com/problems/count-the-number-of-beautiful-subarrays/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-07-15T19:18:27.947Z

class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        unordered_map<int, long long> mp;

        mp[0] = 1;

        long long ans = 0;
        int prefixXor = 0;

        for (int x : nums) {
            prefixXor ^= x;
            ans += mp[prefixXor];
            mp[prefixXor]++;
        }

        return ans;
    }
};