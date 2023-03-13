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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        
        TreeNode *left, *right;
        queue<TreeNode*>leftQ,rightQ;
        leftQ.push(root->left);
        rightQ.push(root->right);
        while(leftQ.size() and rightQ.size()){
           left = leftQ.front();
           right = rightQ.front();
           leftQ.pop(),rightQ.pop();
            if(!left and !right)continue;
            if(!left or !right) return false;
            if(left->val != right->val) return false;
            
            leftQ.push(left->left);
            leftQ.push(left->right);
            rightQ.push(right->right);
            rightQ.push(right->left);
        }
        return true;
    }
};