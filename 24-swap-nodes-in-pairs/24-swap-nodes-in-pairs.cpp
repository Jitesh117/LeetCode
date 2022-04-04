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
    ListNode* swapPairs(ListNode* head) {
        ListNode* current = head;
        int temp;
        while(current && current->next)
        {
            temp = current->val;
            current->val = current->next->val;
            current->next->val = temp;
            current = current->next->next;
        }
        
        return head;
    }
};