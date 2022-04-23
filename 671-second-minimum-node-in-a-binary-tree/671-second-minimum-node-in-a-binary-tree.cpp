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
   set<int> s;
    int findSecondMinimumValue(TreeNode* root) {
        if(!root)
            return -1;
        inorder(root);
        if(s.size()==1)
            return -1;
      auto itr=s.begin();
        itr++;
        return *itr;
    }
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        s.emplace(root->val);
        inorder(root->right);
    }
};