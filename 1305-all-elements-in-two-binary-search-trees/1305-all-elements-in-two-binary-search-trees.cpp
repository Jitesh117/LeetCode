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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>result;
        solve(root1,result);
        solve(root2,result);
        sort(result.begin(),result.end());
        return result;
    }
    void solve(TreeNode*root, vector<int>&result)
    {
        if(!root)
            return;
        solve(root->left,result);
        result.push_back(root->val);
        solve(root->right,result);
    }
};