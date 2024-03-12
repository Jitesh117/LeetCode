/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* result = new ListNode(0), *cur = result;
        result -> next = head;
        int prefix = 0;
        unordered_map<int, ListNode*> loc_store;
        while(cur){
            prefix += cur -> val;
            if(loc_store[prefix]){
                cur = loc_store[prefix] -> next;
                int p = prefix + cur -> val;
                while(p != prefix){
                    loc_store.erase(p);
                    cur = cur -> next;
                    p += cur -> val;
                }
                loc_store[prefix] -> next = cur -> next;
            }
            else{
                loc_store[prefix] = cur;
            }
            cur = cur -> next;
        }
        return result -> next;
    }
};