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
    int goodNodes(TreeNode* root) {
        int result = 0;
        solve(root, result, INT_MIN);
        return result;
    }

    void solve(TreeNode* root, int &result, int maxVal){
        if(!root) return;
        if(root -> val >= maxVal){
            maxVal = root -> val;
            result ++;
        }
        solve(root -> left, result, maxVal);
        solve(root -> right, result, maxVal);
    }
};