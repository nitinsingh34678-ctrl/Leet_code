/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head){
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    struct ListNode *firstHalf = head;
    struct ListNode *secondHalf = slow->next;

    slow->next = NULL;

    struct ListNode *current = secondHalf;
    struct ListNode *prev = NULL;
    struct ListNode *next;

    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    secondHalf = prev;

    struct ListNode *firstnext;
    struct ListNode *secondnext;
    while(firstHalf!=NULL && secondHalf!=NULL){
        firstnext=firstHalf->next;
        secondnext=secondHalf->next;

        firstHalf->next=secondHalf;
        secondHalf->next=firstnext;

        firstHalf=firstnext;
        secondHalf=secondnext;
        }
        
}
