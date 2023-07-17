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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1, l1);      
        l2 = reverse(l2, l2);      
        
        ListNode* result = addNumbers(l1, l2);
        reverse(result, result);
        return result;
    }
        ListNode* addNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* result = new ListNode();
        ListNode* temp = result;
        while(l1 or l2 or carry){
            int sum = 0;
            if(l1){
                sum += l1->val;
                l1 = l1 -> next;
            }
            if(l2){
               sum += l2 -> val;
               l2 = l2 -> next;
            }
            sum += carry;
            carry = sum / 10;
            ListNode* t = new ListNode( sum % 10);
            temp -> next = t;
            temp = temp -> next;
        }
        return result -> next;
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