// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Maximum Nesting Depth of Two Valid Parentheses Strings
// URL        : https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-09-30T18:06:20.116Z

class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans(seq.size());

        int depth = 0;

        for (int i = 0; i < seq.size(); i++) {

            if (seq[i] == '(') {
                depth++;
                ans[i] = depth % 2;
            }
            else {
                ans[i] = depth % 2;
                depth--;
            }
        }

        return ans;
    }
};