/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode lessDummy;
    struct ListNode greaterDummy;
    struct ListNode *less=&lessDummy;
    struct ListNode *great=&greaterDummy;
    struct ListNode *current=head;

    while(current!=NULL){
        if(current->val<x){
            less->next=current;
            less=less->next;
        }
        else{
            great->next=current;
            great=great->next;
        }
        current=current->next;
    }
    great->next=NULL;
    less->next=greaterDummy.next;
    return lessDummy.next;
}