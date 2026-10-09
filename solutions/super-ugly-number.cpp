// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Super Ugly Number
// URL        : https://leetcode.com/problems/super-ugly-number/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-10-09T21:26:39.570Z

class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
         
        priority_queue<long, vector<long>, greater<long>> uglyHeap;
        unordered_set<long> visited;
        
        uglyHeap.push(1);
        visited.insert(1);
        
        long curr;
        for (int i = 0; i < n; ++i) {
            curr = uglyHeap.top();
            uglyHeap.pop();
            for (int prime : primes) {
                long new_ugly = curr * prime;
                if (visited.find(new_ugly) == visited.end()) {
                    uglyHeap.push(new_ugly);
                    visited.insert(new_ugly);
                }
            }
        }
        return (int)curr;
    }
};