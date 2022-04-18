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
    int getDecimalValue(ListNode* head) {
        string result;
        ListNode* current = head;
        while(current)
        {
            result+=to_string(current->val);
            current=current->next;
        }
        
      int dec=0;
        int pl=1;
        for(int i = result.size()-1;i>=0;i--)
        {
            dec+=(pl*(stoi(result.substr(i,1))));
            pl*=2;
        }
        return dec;
    }
};