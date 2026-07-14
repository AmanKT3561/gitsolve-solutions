// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Continuous Subarray Sum
// URL        : https://leetcode.com/problems/continuous-subarray-sum/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-07-14T20:02:49.209Z

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum%k)!=mp.end()){
                if(i-mp[sum%k]>=2)
                    return true;
            }
            else
                mp[sum%k]=i;
        }
        return false;

    }
};