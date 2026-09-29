// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Contains Duplicate III
// URL        : https://leetcode.com/problems/contains-duplicate-iii/
// Difficulty : Hard
// Language   : cpp
// Saved at   : 2026-09-29T20:55:42.337Z

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int j) {
       set<int> st;
       for(int i = 0 ; i< nums.size() ; i++){
       if(i > k ) st.erase(nums[i-k-1]);
       auto it = st.lower_bound(nums[i] - j);
       if(it != st.end() && abs(*it - nums[i]) <= j) return 1;
       st.insert(nums[i]);
       }
       return 0;

       
    }
};