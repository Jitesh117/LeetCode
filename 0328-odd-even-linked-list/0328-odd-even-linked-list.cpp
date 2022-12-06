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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>odd,even;
        ListNode* cur = head;
        bool od = true;
        while(cur)
        {
            if(od)
                odd.push_back(cur->val);
            else
                even.push_back(cur->val);
            cur = cur->next;
            od= !od;
        }
        reverse(odd.begin(),odd.end());
        reverse(even.begin(),even.end());
        cur = head;
        while(odd.size())
        {
            cur->val = odd.back();
            odd.pop_back();
            cur = cur->next;
        }
        while(even.size())
        {
            cur->val = even.back();
            even.pop_back();
            cur = cur->next;
        }
        return head;
    }
};