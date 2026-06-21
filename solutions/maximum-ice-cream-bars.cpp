// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Maximum Ice Cream Bars
// URL        : https://leetcode.com/problems/maximum-ice-cream-bars/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-06-21T06:39:33.030Z

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
      sort(costs.begin() , costs.end());
      int ans = 0;
      for(auto i:costs){
       if(i > coins) break;
       ans++;
       coins-=i;
      }  
      return ans;
    }
};