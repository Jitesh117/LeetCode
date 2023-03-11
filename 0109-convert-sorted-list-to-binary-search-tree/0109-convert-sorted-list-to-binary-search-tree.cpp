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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL;
        if (head -> next == nullptr) {
            TreeNode *root = new TreeNode(head -> val);
            return root;
        }
        return binarySearchTree(head,NULL);
    }
    TreeNode* binarySearchTree(ListNode* left, ListNode* right){
        if(left == right) return NULL;
        ListNode* slow = left, *fast = left;
        while(fast != right and fast->next != right){
            slow = slow->next;
            fast = fast->next->next;
        }
        TreeNode *root = new TreeNode(slow -> val);
        root->left = binarySearchTree(left,slow);
        root->right = binarySearchTree(slow->next,right);
        
        return root;
    }
};