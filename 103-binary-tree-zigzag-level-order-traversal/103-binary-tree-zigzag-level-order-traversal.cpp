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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)
            return {};
        bool left = true;
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>result;
        
        while(q.size())
        {
            int n = q.size();
            vector<int>temp;
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
             if(!left)
                 reverse(temp.begin(),temp.end());
            result.push_back(temp);
            left=!left;
        }
        return result;
    }
};