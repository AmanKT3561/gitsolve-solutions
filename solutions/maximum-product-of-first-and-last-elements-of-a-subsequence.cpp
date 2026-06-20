// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Maximum Product of First and Last Elements of a Subsequence
// URL        : https://leetcode.com/problems/maximum-product-of-first-and-last-elements-of-a-subsequence/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-06-20T18:07:07.237Z

typedef long long ll;
class Solution {
public:
    long long maximumProduct(vector<int>& nums, int m) {
        int n = nums.size();
        ll ans = LLONG_MIN;

        if (m == 1) {
            for (auto it : nums) {
                ll v = (ll)it * it;
                ans = max(ans, v);
            }
            return ans;
        }

        ll maxi = LLONG_MIN;
        ll mini = LLONG_MAX;

        for (int j = m - 1; j < n; j++) {
            int i = j - m + 1; 
            maxi = max(maxi, (ll)nums[i]);
            mini = min(mini, (ll)nums[i]);

            ll prod1 = maxi * nums[j];
            ll prod2 = mini * nums[j];
            ans = max(ans, max(prod1, prod2));
        }

        return ans;
    }
};