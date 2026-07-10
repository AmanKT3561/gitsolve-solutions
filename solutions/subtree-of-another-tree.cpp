// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Subtree of Another Tree
// URL        : https://leetcode.com/problems/subtree-of-another-tree/
// Difficulty : Easy
// Language   : cpp
// Saved at   : 2026-07-10T18:53:23.362Z

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==NULL)
            return true;
        if(root==NULL)
            return false;
        if(isidentical(root,subRoot))
            return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }

    bool isidentical(TreeNode* a, TreeNode* b){
        if(a==NULL && b==NULL)
            return true;
        if(a==NULL || b==NULL)
            return false;
        if(a->val!=b->val)
            return false;
        return isidentical(a->left,b->left) && isidentical(a->right,b->right);
    }
};