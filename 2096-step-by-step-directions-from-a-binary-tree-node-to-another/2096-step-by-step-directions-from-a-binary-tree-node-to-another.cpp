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
        if(!root) return "";
        TreeNode* lca = solve(root,p,q);
        string left,right;
        solvestring(lca,p,left);
        solvestring(lca,q,right);
        
        
        for(int i = 0;i<left.size();i++) left[i]  = 'U';
        return left+right;
        
    }
    bool solvestring(TreeNode* root, int value,string &result){
       if(!root) return false;
       if(root->val == value) return true;
        
        result.push_back('L');
        if(solvestring(root->left,value,result)) return true;
        result.pop_back();
        
        result.push_back('R');
        if(solvestring(root->right,value,result)) return true;
        result.pop_back();
        
        return false;
    }
    TreeNode* solve(TreeNode* root, int p, int q){
        if(!root) return root;
        if(root->val == p or root->val == q) return root;
        
        TreeNode* left = solve(root->left,p,q);
        TreeNode* right = solve(root->right,p,q);
        
        if(left and right) return root;
        
        if(left) return left;
        
        return right;
        
    }
};