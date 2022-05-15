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
    int deepestLeavesSum(TreeNode* root) {
        if(!root)
            return 0;
        int depth = maxdepth(root);
        return levelsum(root,depth,0);
        
    }
    int levelsum(TreeNode* root,int level,int clevel)
    {
        if(!root)
            return 0;
        if(clevel == level-1)
            return root->val;
        return levelsum(root->left,level,clevel+1)+levelsum(root->right,level,clevel+1);
    }
    int maxdepth(TreeNode* root)
    {
        if(!root)
            return 0;
        int l = maxdepth(root->left);
        int r = maxdepth(root->right);
        return max(l,r)+1;
    }
};