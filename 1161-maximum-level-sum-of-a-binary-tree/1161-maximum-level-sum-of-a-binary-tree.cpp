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
class Solution
{
public:
    int maxLevelSum(TreeNode *root)
    {
        vector<TreeNode *> q;
        q.push_back(root);
        int level = 0, mlevel = 0, msum = INT_MIN;
        while (q.size())
        {
            vector<TreeNode *> tempq;
            int sum = 0;
            level++;
            for (auto n : q)
            {
                sum += n->val;
                if (n->left)
                    tempq.push_back(n->left);
                if (n->right)
                    tempq.push_back(n->right);
            }

            if (msum < sum)
                mlevel = level;
            msum = max(sum, msum);
            swap(q, tempq);
        }
        return mlevel;
    }
};