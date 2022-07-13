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
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)
            return {};
        queue<Node*>q;
        q.push(root);
        vector<vector<int>>result;
        
        while(q.size())
        {
            int n = q.size();
            vector<int>temp;
            for(int i = 0;i<n;i++)
            {
                Node* node = q.front();
                q.pop();
                temp.push_back(node->val);
                for(auto it:node->children)
                    if(it)
                        q.push(it);
                
            }
            result.push_back(temp);
        }
        return result;
    }
};