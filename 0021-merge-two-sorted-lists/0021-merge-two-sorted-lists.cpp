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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *curr1 = list1,*curr2 = list2;
        ListNode dummy = ListNode(0);
        ListNode *ans = &dummy;
        if(!list1)
            return list2;
        else if(!list2)
            return list1;
        while(curr1 && curr2)
        {
            if(curr1->val<=curr2->val)
            {
                ans->next = curr1;
                curr1 = curr1->next;
                ans = ans->next;
                
            }
            else
            {
                ans->next = curr2;
                curr2 = curr2->next;
                ans = ans->next;
            }
        }
        if(curr1)
            ans->next = curr1;
        else
            ans->next = curr2;
        return dummy.next;
        
    }
};