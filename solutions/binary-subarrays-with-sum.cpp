// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Binary Subarrays With Sum
// URL        : https://leetcode.com/problems/binary-subarrays-with-sum/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-07-14T20:15:09.756Z

/*Given a binary array nums and an integer goal, 
return the number of non-empty subarrays with a sum goal.*/
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0;
        int sum = 0;
        unordered_map<int, int> mp;
        mp.insert({0, 1});
        for (int it : nums) {
            sum += it; 
            count += mp[sum - goal];
            mp[sum]++; 
        }
        return count;
    }
};