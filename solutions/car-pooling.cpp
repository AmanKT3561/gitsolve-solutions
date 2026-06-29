// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Car Pooling
// URL        : https://leetcode.com/problems/car-pooling/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-06-29T16:46:14.785Z

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int k) {
        map<int,int> mp;
        for(auto i:trips){
          mp[i[1]] += i[0];
          mp[i[2]] -= i[0];
        }
int count = 0;
        for(auto i:mp){
          count += i.second;
          if(count > k) return 0;
        }
        return 1;
    }
};