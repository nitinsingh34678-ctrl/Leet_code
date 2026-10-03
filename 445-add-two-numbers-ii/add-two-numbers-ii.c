/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *current=l1;
    struct ListNode *prev=NULL;
    struct ListNode *nextnode;
    while(current!=NULL){
        nextnode=current->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }
    l1=prev;
    struct ListNode *current_l2=l2;
    struct ListNode *prev_l2=NULL;
    while(current_l2!=NULL){
        nextnode=current_l2->next;
        current_l2->next=prev_l2;
        prev_l2=current_l2;
        current_l2=nextnode;
    }
    l2=prev_l2;
    int carry=0;
   
    struct ListNode *result = NULL;
    while(l1!=NULL || l2!=NULL || carry!=0){
        int sum=carry;
        if(l1!=NULL)
            sum+=l1->val;
        if(l2!=NULL)
            sum+=l2->val;
        int digit = sum % 10;
        carry = sum / 10;

        struct ListNode *newnode = malloc(sizeof(struct ListNode));
        newnode->val=digit;
        newnode->next = result;
        result = newnode;

        if(l1 != NULL)
            l1 = l1->next;

        if(l2 != NULL)
            l2 = l2->next;
    }
    return result;
   


}