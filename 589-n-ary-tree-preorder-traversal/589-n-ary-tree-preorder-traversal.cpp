/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
       vector<int> v;
        solve(root,v);
        
        return v;
        
    }
    void solve(Node* root,vector<int> &v)
    {
         // vector<int> v;
        if(root == NULL)
           return;
        v.push_back(root->val);
        for(auto i : root->children)
            solve(i,v);
    }
};