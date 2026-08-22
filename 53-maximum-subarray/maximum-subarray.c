int maxSubArray(int* nums, int numsSize) {
    int i, sum = 0;
    int max = nums[0];

    for(i = 0; i < numsSize; i++) {
        if(sum + nums[i] > nums[i])
            sum = sum + nums[i];
        else
            sum = nums[i];

        if(sum > max)
            max = sum;
    }

    return max;
}