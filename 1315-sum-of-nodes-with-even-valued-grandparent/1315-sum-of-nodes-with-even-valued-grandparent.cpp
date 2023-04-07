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
    int sumEvenGrandparent(TreeNode* root) {
       int result = 0;
        dfs(root,nullptr, nullptr, result);
        
        return result;
    }
    
    void dfs(TreeNode* root, TreeNode* p, TreeNode* gp, int &result){
        if(!root) return;
        if(gp and gp->val %2 == 0) result+= root->val; 
        
        dfs(root->left, root, p, result);
        dfs(root->right, root, p, result);
    }
    
};