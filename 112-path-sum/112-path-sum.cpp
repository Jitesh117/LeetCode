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
    // bool sum;
    bool hasPathSum(TreeNode* root, int targetsum) {
        if(!root )
            return false;
        int remain = targetsum - root->val;
        
        if(!root->left && !root->right)
            if(remain == 0)
                return true;
       return(hasPathSum(root->left,remain) || hasPathSum(root->right,remain));
    }
};