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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* current = head;
        int count = 1;
        stack<int>s;
        while(count<=right)
        {
            if(count>=left)
            {
                s.push(current->val);
            }
            count++;
            current = current->next;
        }
        count = 1;
        current = head;
        while(count<=right)
        {
            if(count>=left)
            {
                current->val = s.top();
                s.pop();
            }
            count++;
            current = current->next;
        }
        return head;
    }
};