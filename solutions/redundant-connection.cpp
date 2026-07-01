// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Redundant Connection
// URL        : https://leetcode.com/problems/redundant-connection/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-07-01T17:52:51.440Z

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int l = -1;
        int r = -1;

        vector<int> dist(1001, 0);

        map<int, vector<int>> mp;

        for (auto i : edges) {
            mp[i[0]].push_back(i[1]);
        }

        function<void(int, int)> func = [&](int node, int par) {
            dist[node]++;
            for (auto i : mp[node]) {
                if (i == par)
                    continue;
                if (dist[i] > 0) {
                    l = node, r = i;
                }
                func(i, node);
            }
        };

        func(1, -1);
        return {l, r};
    }
};