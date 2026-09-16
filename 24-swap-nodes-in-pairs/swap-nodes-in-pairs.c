struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next = head;

    struct ListNode *prev = &dummy;

    while(prev->next != NULL && prev->next->next != NULL) {
        struct ListNode *first = prev->next;
        struct ListNode *second = first->next;
        struct ListNode *next = second->next;

        prev->next = second;
        second->next = first;
        first->next = next;

        prev = first;
    }

    return dummy.next;
}