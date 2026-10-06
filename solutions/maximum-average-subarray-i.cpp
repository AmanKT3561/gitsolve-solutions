// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Maximum Average Subarray I
// URL        : https://leetcode.com/problems/maximum-average-subarray-i/
// Difficulty : Easy
// Language   : cpp
// Saved at   : 2026-10-06T22:30:18.131Z

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) sum += nums[i];
        int maxSum = sum;
        
        for (int i = k; i < nums.size(); i++) {
            sum = sum - nums[i - k] + nums[i];
            maxSum = max(maxSum, sum);
        }
        
        return (double) maxSum / k;
    }
};