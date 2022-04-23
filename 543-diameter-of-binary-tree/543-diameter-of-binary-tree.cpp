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
    int diameterOfBinaryTree(TreeNode* root) {
        int result=INT_MIN+1;
        // return solve(root,result);
        solve(root,result);
        return result-1;
    }
    int solve(TreeNode* root,int &result)
    {
        if(!root)
            return 0;
        int l = solve(root->left,result);
        int r = solve(root->right,result);
       
        int temp = 1 + max(l, r);
        int ans = max(temp, l + r + 1);
        result = max(result, ans);
        return temp;
    
    }
};