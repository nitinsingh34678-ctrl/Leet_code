/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
struct ListNode** splitListToParts(struct ListNode* head, int k, int* returnSize) {
    struct ListNode *current=head;
    struct ListNode **result = malloc(k * sizeof(struct ListNode *));
    int count_node=0;
    while(current!=NULL){
        current=current->next;
        count_node++;
    }
    current=head;
    int base=count_node/k;
    int extra=count_node%k;
    int i;

    for(i=0;i<k;i++){
        int partsize;
        if(i<extra)
            partsize=base+1;
        else
            partsize=base;

        int count=1;
        struct ListNode *partHead = current;
        while(count<partsize){
        current=current->next;
        count++;
        }

        if(partsize!=0){
        struct ListNode *nextPart = current->next;
        current->next=NULL;
        current=nextPart;
        }
        result[i]=partHead;
    }
    *returnSize = k;
     return result;

}