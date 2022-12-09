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
    int maxAncestorDiff(TreeNode* root) {
        return solve(root,root->val,root->val);
    }
    int solve(TreeNode* root, int maxval, int minval){
        if(!root) return maxval - minval;
        maxval = max(maxval,root->val);
        minval = min(minval,root->val);
        return max(solve(root->left,maxval,minval),solve(root->right,maxval,minval));
    }
    
};