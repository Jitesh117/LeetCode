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
        queue<Node*>q;
        if(!root)
            return NULL;
        q.push(root);
        q.push(NULL);
        vector<Node*>v;
        while(!q.empty())
        {
           Node* node = q.front();
            if(node)
            {
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                v.push_back(node);
                q.pop();
            }
            else
            {
                for(int i = 0;i<v.size()-1;i++)
                    v[i]->next = v[i+1];
                v[v.size()-1]->next = NULL;
                v.clear();
                q.pop();
                if(!q.empty())
                    q.push(NULL);
            }
        }
        return root;
    }
};