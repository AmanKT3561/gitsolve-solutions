// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Find All Possible Recipes from Given Supplies
// URL        : https://leetcode.com/problems/find-all-possible-recipes-from-given-supplies/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-07-13T18:08:37.752Z

class Solution {
public:
    vector<string> findAllRecipes(vector<string>& rec,
                                  vector<vector<string>>& ing,
                                  vector<string>& supplies) {

        map<string, int> indeg;

        map<string, vector<string>> adj;

        for (int i = 0; i < rec.size(); i++) {
            for (auto j : ing[i]) {
                adj[j].push_back(rec[i]);
                indeg[rec[i]]++;
            }
        }

        queue<string> q;
        set<string> st;

        for (auto i : supplies) {
            q.push(i);
        }

        while (!q.empty()) {
            auto it = q.front();
            q.pop();

            for (auto i : adj[it]) {
                indeg[i]--;
                if (indeg[i] == 0) {
                    q.push(i);
                    st.insert(i);
                }
            }
        }
        vector<string> ans;
        for (auto i : rec)
            if (st.count(i))
                ans.push_back(i);

        return ans;
    }
};