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
    int longestZigZag(TreeNode* root) {
       if(!root) return 0;
       maxlen(root, true,0); 
       maxlen(root, false,0); 
        
       return result;
    }
    void maxlen(TreeNode* root, bool goLeft, int count){
        if(!root) return;
        result = max(result, count);
        if(goLeft){
           maxlen(root->left,false, count + 1); 
           maxlen(root->right,true, 1);
        }
        else{
            maxlen(root->left, false, 1);
            maxlen(root->right, true, count + 1);
        }
    }
};