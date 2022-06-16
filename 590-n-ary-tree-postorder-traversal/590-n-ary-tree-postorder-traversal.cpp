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
    vector<int> postorder(Node* root) {
        vector<int>result;
        solve(root,result);
        return result;
    }
    void solve(Node* root,vector<int>&result)
    {
        if(!root)
            return;
        for(auto i:root->children)
            solve(i,result);
        result.push_back(root->val);
    }
};