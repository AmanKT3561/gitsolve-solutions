// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Sum Root to Leaf Numbers
// URL        : https://leetcode.com/problems/sum-root-to-leaf-numbers/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-06-26T11:57:07.085Z

class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }

    int dfs(TreeNode* node, int path) {
        if (!node) return 0;
        path = path * 10 + node->val;
        if (!node->left && !node->right) return path;
        return dfs(node->left, path) + dfs(node->right, path);
    }
};