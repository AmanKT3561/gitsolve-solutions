// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Q3. Longest Resilient Subarray II
// URL        : https://leetcode.com/problems/longest-resilient-subarray-ii/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-10-10T15:03:52.539Z

class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {


        int l = 0;
        int ans = 1;
        while (l < nums.size()) {
            int x = nums[l] % k;
            int r = l;
            while (r < nums.size() && nums[r] % k == x) {
                r++;
            }


            int res = k / gcd(x, k);
            int p = 1 + ((r - l - 1) / res) * res;
            ans = max(ans, p);
          l = r;
        }
        return ans;
    }
};