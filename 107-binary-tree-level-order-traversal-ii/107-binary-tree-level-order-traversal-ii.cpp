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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>result;
        
        while(q.size())
        {
            int n = q.size();
           
            vector<int>temp;
            
            for(int i = 0;i<n;i++)
            {   TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            result.push_back(temp);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};