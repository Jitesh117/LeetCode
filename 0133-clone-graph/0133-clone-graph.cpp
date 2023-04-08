/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        unordered_map<Node*, Node*> umap;
        dfs(node,umap);
        
        return umap[node];
    }
    void dfs(Node* node, unordered_map<Node*, Node*> &umap){
        Node* clone = new Node(node->val);
        umap[node] = clone; 
        for(auto neighbor: node->neighbors){
            if(umap[neighbor]){
                clone->neighbors.push_back(umap[neighbor]);
            }
            else{
                dfs(neighbor,umap);
                clone->neighbors.push_back(umap[neighbor]);
            }
        }
    }
};