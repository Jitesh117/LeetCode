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
    int result;
    int maxPathSum(TreeNode* root) {
        result=INT_MIN;
        solve(root);
        return result;
    }
    int solve(TreeNode* root)
    {
        if(!root)
            return 0;
        int l = solve(root->left);
        int r = solve(root->right);
        
        int temp = max(root->val + max(l, r), root->val);
        int ans = max(temp, l + r + root->val);
        result = max(result, ans);
        
        return temp;
    }
};