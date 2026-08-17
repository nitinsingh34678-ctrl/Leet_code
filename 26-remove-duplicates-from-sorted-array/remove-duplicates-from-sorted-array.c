int removeDuplicates(int* nums, int numsSize) {
    int i,k=1;
    for(i=1;i<numsSize;i++){
        if(nums[i]==nums[i-1]){
            continue;
        }
        nums[k]=nums[i];        
        k++;
    }
    return k;
}