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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return NULL;
        dfs(1,root->left, root->right);
        
        return root;
    }
    void dfs(int level, TreeNode* left, TreeNode* right){
        if(!left or !right) return;
        if(level %2 != 0){
            swap(left->val, right->val);
        }
        dfs(level+1, left->left,right->right);
        dfs(level+1, right->left,left->right);
    }
};