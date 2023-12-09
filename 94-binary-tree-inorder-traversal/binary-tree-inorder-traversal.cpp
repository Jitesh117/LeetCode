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
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> result;
       if(!root) return result;
       stack<TreeNode*> st;
       TreeNode*node = root;
       while(true){
           if(node){
               st.push(node);
               node = node -> left;
           }
           else{
               if(st.empty()) break;
               node = st.top();
               st.pop();
               result.push_back(node -> val);
               node = node -> right;
           }
       }
       return result;

    }
};