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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* current = head;
        int count = 0;
        while(current)
        {
            count++;
            current= current->next;
        }
        current = head;
        int i = 1;
        while(i<k)
        {
            current = current->next;
            i++;
        }
        ListNode* end = head;
        i = 0;
        while(i<count-k)
        {
            end = end->next;
            i++;
        }
      int temp = end->val;
        end->val = current->val;
        current->val = temp;
        
        return head;
        
    }
};