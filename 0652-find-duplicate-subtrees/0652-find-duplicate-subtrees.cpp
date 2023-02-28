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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string,vector<TreeNode*>> umap;
        vector<TreeNode*> result;
        solve(root,umap);
        for(auto it: umap){
            if(it.second.size()>1)
                result.push_back(it.second[1]);
        }
        return result;
    }
    string solve(TreeNode* root, unordered_map<string,vector<TreeNode*>>& umap){
        if(!root)
            return "";
        string s = "("+ solve(root->left,umap) + to_string(root->val) + solve(root->right,umap) + ")";
        umap[s].push_back(root);
        return s;
    }
};