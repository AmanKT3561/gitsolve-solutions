// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Combinations
// URL        : https://leetcode.com/problems/combinations/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-07-14T12:05:19.430Z

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {

        vector<vector<int>> ans;
        function<void(int , vector<int>&)> func = [&](int idx,
                                                    vector<int>& temp) {
            if (temp.size() == k ) {
                ans.push_back(temp);
                return;
            }

            for (int i = idx; i <= n; i++) {
                temp.push_back(i);
                func(i + 1, temp);
                temp.pop_back();
            }
        };
        vector<int> temp;
        func(1, temp);
        return ans;
    }
};