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
    int maxPathSum(TreeNode* root) {
        int result = INT_MIN;
        solve(root,result);
        return result;
    }
    int solve(TreeNode* root,int &result){
        if(!root) return 0;
        int left = solve(root->left,result);
        int right = solve(root->right,result);
        
        int temp = max(root->val+max(left,right),root->val);
        int ans = max(temp,left+root->val+right);
        
         result = max(result,ans);
        return temp;
            
    }
};