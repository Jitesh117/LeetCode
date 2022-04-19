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
    TreeNode* root1=NULL;
    TreeNode* root2=NULL;
    TreeNode* prev=NULL;
    void recoverTree(TreeNode* root) {
        if(!root)
            return;
        inorder(root);
        if(root1 && root2)
            swap(root1->val,root2->val);
        
    }
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
            if(prev && root->val<prev->val)
            {
                if(!root1)
                    root1=prev;
                if(root1)
                    root2=root;
                    
            }
        prev =root;
        inorder(root->right);
    }
};