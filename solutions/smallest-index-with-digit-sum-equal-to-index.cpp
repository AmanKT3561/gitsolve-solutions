// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Smallest Index With Digit Sum Equal to Index
// URL        : https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/
// Difficulty : Easy
// Language   : cpp
// Saved at   : 2026-09-24T16:23:27.251Z

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        auto check = [&](int x) -> int {
        int sum = 0;
        x = abs(x);
        while(x){
          sum += x%10;
          x/=10;
        }
        return sum;
        };
        for(int i = 0 ; i<nums.size() ; i++){
          if(check(nums[i]) == i) return i;
        }
        return -1;
    }
};