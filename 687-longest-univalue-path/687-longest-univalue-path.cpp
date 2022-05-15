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
    int result=0;
    int longestUnivaluePath(TreeNode* root) {
        longpath(root,INT_MIN);
        return result;
    }
    int longpath(TreeNode* root,int val)
    {
        if(!root)
            return 0;
        int left = longpath(root->left,root->val);
        int right = longpath(root->right,root->val);
        result = max(result,left+right);
        if(root->val == val)
        {
            return max(left,right)+1;
        }
        return 0;
        
    }
};