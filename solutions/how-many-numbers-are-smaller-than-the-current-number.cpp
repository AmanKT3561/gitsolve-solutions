// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : How Many Numbers Are Smaller Than the Current Number
// URL        : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// Difficulty : Easy
// Language   : cpp
// Saved at   : 2026-06-27T10:49:00.662Z

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> m;
        vector<int> vec = nums;
        int n = nums.size();
        
        sort(vec.begin(), vec.end());
        
        for(int i=n-1; i>=0; i--) {
            m[vec[i]] = i;
        }
        
        for(int i=0; i<n; i++) {
            nums[i] = m[nums[i]];
        }
        
        return nums;
    }
};