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
        //get length of both linked lists
        int A = 0;
        int B = 0; 
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;
        
        while(ptrA){
            A++;
            ptrA = ptrA->next;
        }
        
        while(ptrB){
            B++;
            ptrB = ptrB->next;
        }
        
        ptrA = headA;
        ptrB = headB;
        
        while(A > 0 && B > 0 )
        {
            if(A > B){
                A--;
                ptrA = ptrA->next;
            }
            
            if(B > A){
                B--;
                ptrB = ptrB->next;
            }
    
        if(A == B){
            if(ptrA == ptrB){
                return ptrA;
            }
            else{
                ptrA = ptrA->next;
                ptrB = ptrB->next;
                A--;
                B--;
            }
        }
    }
    return false;
    }
};
