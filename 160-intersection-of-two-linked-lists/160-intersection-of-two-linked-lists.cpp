/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> hash;
        ListNode* first = headA;
        while(first)
        {
            hash[first]++;
            first=first->next;
        }
        first = headB;
        while(first)
        {
            if(hash[first]>0)
                return first;
            first=first->next;
        }
        return NULL;
    }
};