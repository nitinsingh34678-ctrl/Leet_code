struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int x = 0;
    int y = 0;
    int carry = 0;
    int sum;

    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;

    while(l1 != NULL || l2 != NULL || carry != 0) {

        x = 0;
        y = 0;

        if(l1 != NULL) {
            x = l1->val;
            l1 = l1->next;
        }

        if(l2 != NULL) {
            y = l2->val;
            l2 = l2->next;
        }

        sum = x + y + carry;
        carry = sum / 10;

        struct ListNode *newNode = malloc(sizeof(struct ListNode));
        newNode->val = sum % 10;
        newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
        
    }

    return head;
}