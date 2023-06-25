/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
               if(!root) return root;
       queue<Node*> q; 
       q.push(root);
       vector<vector<Node*>>level;
       while(q.size()){
           int n = q.size();
           vector<Node*> temp;
           for(int i = 0;i < n; i++){
               Node* node = q.front();
               q.pop();
               temp.push_back(node);
               if(node->left) q.push(node->left);
               if(node->right) q.push(node->right);
           }
           level.push_back(temp);
       }
       for(auto v : level){
           for(int i = 0; i < v.size(); i++){
               if(i == v.size() - 1) v[i]->next = NULL;
               else{ 
                   v[i] -> next = v[i+1];
               }
           }
       }
       return root; 
    }
};