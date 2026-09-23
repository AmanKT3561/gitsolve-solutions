// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Minimum Operations to Reduce X to Zero
// URL        : https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-09-23T13:21:34.191Z

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int l = 0;
        int r = 0;

        int sum = accumulate(nums.begin(), nums.end(), 0);
        sum -= x;
        int res = 0;
        int n = nums.size();
        int maxi = -1;

        while (r < n && l < n) {
            res += nums[r];
            while (l<n && res > sum) {
                res -= nums[l];
                l++;
            }
            if (res == sum)
                maxi = max(maxi, r - l + 1);
            r++;
        }

        if (maxi == -1)
            return -1;
        return n - maxi;
    }
};