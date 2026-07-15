// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Find Pivot Index
// URL        : https://leetcode.com/problems/find-pivot-index/
// Difficulty : Easy
// Language   : cpp
// Saved at   : 2026-07-15T17:56:13.335Z

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin() , nums.end() , 0);
        int x = 0;
        for(int i = 0 ; i < nums.size() ; i++){
        if(sum - x - nums[i] == x) return i;
        x += nums[i];
        }
        return -1;
    }
};