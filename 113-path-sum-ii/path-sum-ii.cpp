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
    vector<vector<int>> result;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        solve(root, temp, targetSum);
        return result;
    }
    void solve(TreeNode* root, vector<int>temp, int target){
        if(!root) return;
        temp.push_back(root -> val);
        if(!root -> left and !root -> right and root -> val == target) result.push_back(temp);
        solve(root -> left, temp, target - root -> val);
        solve(root -> right, temp, target - root -> val);
    }
};