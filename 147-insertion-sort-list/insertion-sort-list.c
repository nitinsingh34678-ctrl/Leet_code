/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertionSortList(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next = head;

    struct ListNode *current = head;
    struct ListNode *beforeCurrent = &dummy;
    struct ListNode *prev;
    struct ListNode *next;

    while(current != NULL) {
        prev = &dummy;

        while(prev->next != current && prev->next->val < current->val) {
            prev = prev->next;
        }

        if(prev->next == current) {
            beforeCurrent = current;
            current = current->next;
        }
        else {
            next = current->next;
            beforeCurrent->next = current->next;
            current->next = prev->next;
            prev->next = current;
            current = next;
        }
    }

    return dummy.next;
}