int missingNumber(int* nums, int numsSize) {
    int i,exp_sum=0,act_sum=0,sum=0;
    exp_sum+=numsSize*(numsSize+1)/2;
    for(i=0;i<numsSize;i++){
        act_sum+=nums[i];
    }
    sum=exp_sum-act_sum;
    return sum;
}