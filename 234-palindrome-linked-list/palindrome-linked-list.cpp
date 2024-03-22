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
    bool isPalindrome(ListNode* head) {
       vector<int> list;
       ListNode* cur = head;
       while(cur){
        list.push_back(cur -> val);
        cur = cur -> next;
       }
       reverse(list.begin(), list.end());
       cur = head;
       int i = 0;
       while(i < list.size()){
        if(cur -> val != list[i]) return false;
        cur = cur -> next;
        i++;
       }
       return true;
    }
};