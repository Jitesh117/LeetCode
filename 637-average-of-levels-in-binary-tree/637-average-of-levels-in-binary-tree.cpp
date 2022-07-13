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
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<double>>result;
        
        while(q.size())
        {
            int n = q.size();
            vector<double>temp;
            
            for(int i = 0;i<n;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            result.push_back(temp);
        }
        vector<double>ans;
        for(auto it:result)
        {
            double sum = 0;
            for(auto i:it)
                sum+=i;
            ans.push_back(sum/it.size());
        }
        return ans;
    }
};