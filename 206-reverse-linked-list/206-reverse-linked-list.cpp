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
        ListNode *p = head;
        reverse(head,p);
        return head;
    }
   void reverse(ListNode* &head, ListNode *p)
   {
       if(!p)
           return;
       if(p->next==NULL)
       {
           head = p;
           return;
       }
       reverse(head,p->next);
       ListNode *q = p->next;
       q->next = p;
       p->next = NULL;
   }
    
};