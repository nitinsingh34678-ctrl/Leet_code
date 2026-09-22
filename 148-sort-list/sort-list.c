/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* sortList(struct ListNode* head) {
    if(head==NULL || head->next==NULL)
        return head;
    struct ListNode *slow=head;
    struct ListNode *fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    struct ListNode *left=head;
    struct ListNode *right=slow->next;
    slow->next=NULL;

    left = sortList(left);
    right = sortList(right);
   
    struct ListNode dummy;
    struct ListNode *current=&dummy;
    
    while(left!=NULL && right!=NULL){
        if(left->val<right->val){
            current->next=left;
            left=left->next;
        }
        else{
            current->next=right;
            right=right->next;
        }
        current=current->next;
    }
    if(left != NULL)
        current->next = left;
    else
        current->next = right;

    return dummy.next;
}