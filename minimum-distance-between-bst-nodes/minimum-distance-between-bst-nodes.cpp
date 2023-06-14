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
    int minDiffInBST(TreeNode* root) {
        vector<int>v;
        dfs(root, v);     
        sort(v.begin(),  v.end());
        int result = INT_MAX;
        for(int i = 1;i<v.size();i++){
            result = min(result, v[i] - v[i - 1]);
        }
        return result;
    }
    void dfs(TreeNode* root, vector<int>&v){
        if(!root) return;
        v.push_back(root->val);
        dfs(root->left, v);
        dfs(root->right, v);
    }
};