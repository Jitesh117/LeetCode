/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* cur = head;
        unordered_map<Node*, Node*> nodeMap;
        while(cur){
            nodeMap[cur] = new Node(cur -> val);
            cur = cur -> next;
        }
        cur = head;
        while(cur){
            nodeMap[cur] -> random = nodeMap[cur -> random];
            nodeMap[cur] -> next = nodeMap[cur -> next];
            cur = cur -> next;
        }
        return nodeMap[head];

    }
};