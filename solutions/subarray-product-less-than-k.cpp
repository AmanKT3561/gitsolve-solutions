// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Subarray Product Less Than K
// URL        : https://leetcode.com/problems/subarray-product-less-than-k/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-10-06T22:33:46.086Z

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;

        int n = nums.size();
        int left = 0;
        int product = 1;
        int ans = 0;

        for(int right = 0; right < n; right++) {
            product *= nums[right];

            while(product >= k) {
                product /= nums[left];
                left++;
            }

            ans += (right - left + 1);
        }

        return ans;
    }
};