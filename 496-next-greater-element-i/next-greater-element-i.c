/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *stack=malloc(nums2Size*sizeof(int));
    int top=-1;
    int *next=malloc(nums2Size*sizeof(int));
    for(int i=0;i<nums2Size;i++){
        next[i]=-1;
    }
    for(int i=0;i<nums2Size;i++){
        while(top!=-1 && nums2[i]>nums2[stack[top]]){
            int index=stack[top--];
            next[index]=nums2[i];
        
        }
        stack[++top]=i;
    }
    int *answer = malloc(nums1Size * sizeof(int));

    for(int i = 0; i < nums1Size; i++) {
        for(int j = 0; j < nums2Size; j++) {
            if(nums1[i] == nums2[j]) {
                answer[i] = next[j];
                break;
            }
        }
    }
    free(stack);
    free(next);
    *returnSize = nums1Size;
    return answer;
}