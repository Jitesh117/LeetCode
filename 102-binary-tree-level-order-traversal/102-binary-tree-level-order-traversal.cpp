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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode*>q;
        vector<vector<int>>result;
        q.push(root);
        while(q.size())
        {
            vector<int>temp;
            int n = q.size();
            for(int i = 0;i<n;i++)
            {
                TreeNode* node = q.front();
                temp.push_back(node->val);
                q.pop();
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            result.push_back(temp);
        }
        return result;
    }
};