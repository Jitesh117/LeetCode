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
    string getDirections(TreeNode* root, int p, int q) {
        TreeNode* lca = findlca(root,p,q);
        string pPath,qPath;
        dfs(lca,p,pPath);
        dfs(lca,q,qPath);
        for(int i = 0;i<pPath.size();i++) pPath[i] = 'U';
        return pPath+qPath;
        
    }
    bool dfs(TreeNode* root,int value, string &result){
        if(!root) return false;
        if(root->val == value) return true;
        
        result.push_back('L');
        if(dfs(root->left,value,result)) return true;
        result.pop_back();
        
        result.push_back('R');
        if(dfs(root->right,value,result)) return true;
        result.pop_back();
        
        return false;
    }
    TreeNode* findlca(TreeNode* root,int p, int q){
        if(!root) return root;
        if(root->val == p or root->val == q) return root;
        
        TreeNode* left = findlca(root->left,p,q);
        TreeNode* right = findlca(root->right,p,q);
        
        if(left and right) return root;
        if(left) return left;
        return right;
    }
};