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
    int widthOfBinaryTree(TreeNode* root) {
       if(!root) return 0;
       long long result = 0;
       queue<pair<TreeNode*, long long>>q;
       q.push({root, 0});
       while(q.size()){
           long long  first = q.front().second;
           long long  last = q.back().second;

           int size = q.size();
           result = max(result, last - first + 1);
           for(int i = 0; i < size; i++){
               long long  cur = q.front().second - first;
               TreeNode* node = q.front().first;
               q.pop();
               if(node -> left) q.push({node -> left, cur * 2 + 1});
               if(node -> right) q.push({node -> right, cur * 2 + 2});
           }
       } 
       return result;
    }
};