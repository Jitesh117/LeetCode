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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum =0;
        inorder(root,low,high,sum);
        return sum;
    }
    void inorder(TreeNode* root,int low, int high, int &sum)
    {
        if(!root)
            return;
        inorder(root->left,low,high,sum);
        if(root->val <= high && root->val >=low)
            sum+=root->val;
        inorder(root->right,low,high,sum);
    }
};