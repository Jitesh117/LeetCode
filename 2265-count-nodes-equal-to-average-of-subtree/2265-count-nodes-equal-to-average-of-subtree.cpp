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
        int result = 0;
    int averageOfSubtree(TreeNode* root) {
        if(!root) return 0;
        int count = 0;
        int avg = sum(root,count)/count;
        if(root->val == avg) result++;
        
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        
        return result;
    }
    int sum(TreeNode* root, int &count){
       if(!root) return 0;
        
        count++;
        int left = sum(root->left, count);
        int right = sum(root->right, count);
        
        return root->val + left + right;
    }
};