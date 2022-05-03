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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* prev = head;
        int temp = 0;
        
        while(curr) {
            if(curr->val == val && curr->val == head->val) {
                head = (curr->next == NULL) ? NULL : curr->next;
                prev = curr;
                curr = ( curr == NULL || curr->next == NULL) ? NULL : curr->next;
                
            } else if(curr->val == val) {
                prev->next = (curr->next == NULL) ? NULL : curr->next;
                curr = (curr->next == NULL) ? NULL : curr->next;
                
            } else {
                prev = curr;
                curr = (curr->next == NULL) ? NULL : curr->next;
               
            }
            temp++;
        } 
        
        return head;
    }
};