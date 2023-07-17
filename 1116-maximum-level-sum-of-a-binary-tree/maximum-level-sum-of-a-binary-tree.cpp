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
    int maxLevelSum(TreeNode* root) {
        int result = 1;
        int maxsum = INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while(q.size()){
            level++;
            int n = q.size();
            int sum = 0;
            while(n--){
                TreeNode* node = q.front();
                q.pop();
                sum += node -> val;
                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
            }
            if(sum > maxsum){
                result = level;
                maxsum = sum;
            }
        }
        return result;
    }
};