/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next=head;
    struct ListNode *current=head;
    struct ListNode *prev=&dummy;
    while(current!=NULL && current->next!=NULL){
        if(current->val == current->next->val) {
            int value = current->val;

            while(current != NULL && current->val == value) {
                current = current->next;
        }

            prev->next = current;
        }
        else{
            current=current->next;
            prev=prev->next;
        }
    }
    return dummy.next;

}