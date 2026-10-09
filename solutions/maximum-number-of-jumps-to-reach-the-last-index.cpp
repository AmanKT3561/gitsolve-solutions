// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Maximum Number of Jumps to Reach the Last Index
// URL        : https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-10-09T19:06:24.628Z



class Solution {
public:
    int n;

    
    int solve(int i, vector<int>& nums, int target, vector<int>& dp) {

    
        if(i == n - 1)
            return 0;


        if(dp[i] != -2)
            return dp[i];

        int ans = -1;

       
        for(int j = i + 1; j < n; j++) {

      
            if(abs(nums[j] - nums[i]) <= target) {

                int temp = solve(j, nums, target, dp);

            
                if(temp != -1) {
                    ans = max(ans, 1 + temp);
                }
            }
        }

        return dp[i] = ans;
    }

    int maximumJumps(vector<int>& nums, int target) {

        n = nums.size();

        vector<int> dp(n, -2);

        return solve(0, nums, target, dp);
    }
};