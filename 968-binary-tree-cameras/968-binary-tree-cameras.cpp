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
    int cam;
    set<TreeNode*> covered;
    int minCameraCover(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        cam =0;
        covered.insert(NULL);
        dfs(root,NULL);
        return cam;
    }
    void dfs(TreeNode* node, TreeNode* parent)
    {
        if(node)
        {
            dfs(node->left,node);
            dfs(node->right,node);
            
            if(parent == NULL and covered.find(node)==covered.end()
              or covered.find(node->left)==covered.end() or covered.find(node->right)==covered.end())
            {
                cam++;
                covered.insert(node);
                covered.insert(parent);
                covered.insert(node->left);
                covered.insert(node->right);
            }
        }
    }
};