// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Maximum Population Year
// URL        : https://leetcode.com/problems/maximum-population-year/
// Difficulty : Easy
// Language   : cpp
// Saved at   : 2026-06-29T16:37:09.667Z

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int,int> mp;
        for(auto i:logs){
          mp[i[0]] += 1;
          mp[i[1]] -= 1;
        }
        int count = 0;
        int ans = 0;
        int yr = 0;
        for(auto i:mp){
        count += i.second;
        if(count >  ans){
          ans = count;
          yr = i.first;
        }
        }
        return yr;
    }
};