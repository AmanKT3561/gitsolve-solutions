// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Find the Maximum Number of Elements in Subset
// URL        : https://leetcode.com/problems/find-the-maximum-number-of-elements-in-subset/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-06-27T16:27:32.829Z

class Solution {
public:
    int maximumLength(vector<int>&nums) {
        unordered_map<int,int>mp;
        for(int x:nums)mp[x]++;
        int ans=1;

        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            if(x==1){
                if(mp[x]%2!=0)ans=max(ans,mp[x]);
                else ans=max(ans,mp[x]-1);
            }
            else{
                int ct=0;
                if(mp[x]>=2){
                    long long curr=x;
                    while(curr<=INT_MAX && mp.find((int)curr)!=mp.end()){
                        if(mp[(int)curr]==1){
                            ct++;
                            break;
                        }
                        ct++;
                        if(curr>LLONG_MAX/curr)break;
                        curr*=curr;
                    }
                }
                ans=max(ans,ct*2-1);
            }
        }

        return ans;
    }
};