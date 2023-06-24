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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       map<int,map<int, multiset<int>>> nodes;
       queue<pair<TreeNode*, pair<int, int>>> q;
       q.push({root, {0, 0}});
       while(q.size()){
           TreeNode* node = q.front().first;
           int x = q.front().second.first;
           int y = q.front().second.second;
           q.pop();
           nodes[x][y].insert(node->val);
           if(node -> left) q.push({node -> left, {x - 1, y + 1}});
           if(node -> right) q.push({node -> right, {x + 1, y + 1}});
       }
       vector<vector<int>> result;
       for(auto p: nodes){
           vector<int> col;
           for(auto q : p.second){
                col.insert(col.end(), q.second.begin(), q.second.end());
           }
           result.push_back(col);
       }
       return result;
    }
};