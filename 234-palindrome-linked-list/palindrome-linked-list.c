/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast != NULL)
        slow = slow->next;
    struct ListNode *current_secondhalf=slow;
    struct ListNode *prev=NULL;
    struct ListNode *nextnode;
    while(current_secondhalf!=NULL){
        nextnode=current_secondhalf->next;
        current_secondhalf->next=prev;
        prev=current_secondhalf;
        current_secondhalf=nextnode;
    }
    while(prev!=NULL){
        if(head->val!=prev->val)
            return false;
        head=head->next;
        prev=prev->next;
    }
    return true;
}