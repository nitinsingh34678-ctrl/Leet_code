/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    int length=0,i;
    struct ListNode *current=head;
    struct ListNode *tail=head;
    if(head==NULL || head->next==NULL)
        return head;
    while(current != NULL){
        length++;
        current = current->next;
    }
    k=k%length;
    if(k==0)
     return head;
    for(i=1;i<length-k;i++){
        tail=tail->next;
    }
    struct ListNode *newhead=tail->next;
    struct ListNode *last = head;
    while (last->next!=NULL){
        last=last->next;
    }
    last->next = head;
    tail->next = NULL;
    return newhead;

}