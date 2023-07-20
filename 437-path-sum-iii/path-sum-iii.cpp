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
    long long result = 0;
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        dfs(root, targetSum);
        pathSum(root -> left, targetSum);
        pathSum(root -> right, targetSum);

        return result;
    }

    void dfs(TreeNode* root, long long sum){
        if(!root) return;
        if(root -> val == sum) result++;

        dfs(root -> left, sum - root -> val);
        dfs(root -> right, sum - root -> val);
    }
};