/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *node=head;
    while(head != NULL && head->val == val) {
    head = head->next;
    }
    while(node!=NULL && node->next!=NULL){
        if(node->next->val==val){
            node->next=node->next->next;
        }
        else{
            node=node->next;
        }
    }
    return head;
}