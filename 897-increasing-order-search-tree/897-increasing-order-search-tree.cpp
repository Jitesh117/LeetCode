
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        if(!root)
            return root;
        
        TreeNode* result = new TreeNode();
        TreeNode* current = result;
        inorder(root,current);
        return result->right;
    }
    void inorder(TreeNode* root, TreeNode* &current)
    {
        if(!root)
            return;
        inorder(root->left,current);
        current->right = new TreeNode(root->val);
        current = current->right;
        inorder(root->right,current);
    }
};