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
    bool isCompleteTree(TreeNode* root) {
        if(!root) return true;
        int preNull = false;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()){
            int n = q.size();
            while(n--){
                TreeNode* node = q.front();
                q.pop();
                if(node == NULL) preNull = true;
                else{
                    if(preNull == true) return false;
                    q.push(node->left);
                    q.push(node->right);
                }
            }
        }
        return true;
    }
};