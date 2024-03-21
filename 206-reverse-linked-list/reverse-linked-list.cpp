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
    ListNode* reverseList(ListNode* head) {
       return reverse(head, head);
    }
    ListNode* reverse(ListNode* &head, ListNode* cur){
        if(!cur) return NULL;
        if(!cur -> next){
            head = cur;
            return head;
        }
        
        reverse(head, cur -> next);
        ListNode* Next = cur -> next;
        Next -> next = cur; 
        cur -> next = NULL;
        return head;
    }
};