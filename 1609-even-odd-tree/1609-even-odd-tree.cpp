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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool lvl = true;
        while (q.size()) {
            int cnt = q.size(), prev = lvl  ? 0 : INT_MAX;
            while (cnt--) {
                auto node = q.front();
                q.pop();
                if (lvl) {
                    if (node->val % 2 == 0 || node->val <= prev) return false;
                } else {
                    if (node->val % 2 || node->val >= prev) return false;
                }
                prev = node->val;
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            lvl = !lvl;
        }
        return true;
    }
};