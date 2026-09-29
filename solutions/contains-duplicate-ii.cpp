// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Contains Duplicate II
// URL        : https://leetcode.com/problems/contains-duplicate-ii/
// Difficulty : Easy
// Language   : cpp
// Saved at   : 2026-09-29T20:27:32.099Z

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>> mp;

        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]].push_back(i);

        for (auto &p : mp) {
            vector<int> &a = p.second;

            for (int i = 1; i < a.size(); i++) {
                if (a[i] - a[i - 1] <= k)
                    return true;
            }
        }

        return false;
    }
};