/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            struct ListNode *ptr=head;
            while(ptr!=slow){
                ptr=ptr->next;
                slow=slow->next;
            }
            return ptr;
        }
    }
    return NULL;  
    
}