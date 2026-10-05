/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int numComponents(struct ListNode* head, int* nums, int numsSize) {
    struct ListNode *current = head;
    int count = 0,found,prev_found=0;
    while(current != NULL) {
        found=0;
        for(int i=0;i<numsSize ;i++){
            if(current->val==nums[i]){
                found=1;
                break;
            }
        }
    if(found==1 && prev_found==0){
        count++;
    }
    prev_found=found;
    current = current->next;

    }
    return count;
}