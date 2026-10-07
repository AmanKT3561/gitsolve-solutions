// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Convert Sorted Array to Binary Search Tree
// URL        : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
// Difficulty : Easy
// Language   : cpp
// Saved at   : 2026-10-07T14:30:00.912Z

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {

        TreeNode* head = new TreeNode();

        function<TreeNode*(int, int)> func = [&](int left,
                                                 int right) -> TreeNode* {
            if (left > right)
                return nullptr;
            int mid = left + (right - left) / 2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = func(left, mid - 1);
            root->right = func(mid + 1, right);
            return root;
        };

        return func(0, nums.size() - 1);
        head;
    }
};