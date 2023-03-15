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
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int>preorder;
        stack<TreeNode*>st;
        st.push(root);
        while(st.size()){
            TreeNode* node = st.top();
            st.pop();
            preorder.push_back(node->val); 
            if(node->right) st.push(node->right);
            if(node->left) st.push(node->left);
        }
        return preorder;
    }
};