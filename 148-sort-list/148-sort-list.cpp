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
    ListNode* sortList(ListNode* head) {
        vector<int>temp;
        ListNode* current = head;
        while(current)
        {
            temp.push_back(current->val);
            current=current->next;
        }
        sort(temp.begin(),temp.end());
        current =  head;
        int i = 0;
        while(current)
        {
            current->val = temp[i];
            current=current->next;
            i++;
        }
        return head;
    }
};