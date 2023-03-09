/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         unordered_map<ListNode*,int> umap;
        ListNode* current = head;
        while(current){
            if(umap[current]) return current;
            umap[current]++;
            current = current->next;
        }
        return NULL;
    }
};