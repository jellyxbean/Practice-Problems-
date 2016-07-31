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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head){
            return NULL;
        }
        struct ListNode *n = new ListNode(0);
        n->next = head;
        head = n;
        while (n->next){
            if (n->next->val == val){
                n->next = n->next->next;
            }
            else {
                n = n->next;
            }
        }
        return head->next;
    }
};
