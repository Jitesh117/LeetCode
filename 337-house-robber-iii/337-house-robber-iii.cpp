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
    unordered_map<TreeNode *, int> umap;
    int rob(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        if (umap[root])
            return umap[root];
        int left_max = 0;
        int right_max = 0;
        if (root->left)
        {
            left_max = rob(root->left->left) + rob(root->left->right);
        }
        if (root->right)
        {
            right_max = rob(root->right->left) + rob(root->right->right);
        }

        return umap[root] = max(root->val + left_max + right_max, rob(root->left) + rob(root->right));
    }
};