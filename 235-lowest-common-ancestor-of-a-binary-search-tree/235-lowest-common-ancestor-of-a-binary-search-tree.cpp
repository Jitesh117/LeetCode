/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return root;
        else if(root == p or root == q) return root;
        TreeNode* lroot = lowestCommonAncestor(root->left,p,q);
        TreeNode* rroot = lowestCommonAncestor(root->right,p,q);
        if(lroot and rroot) return root;
        else if(lroot) return lroot;
        return rroot;
    }
};