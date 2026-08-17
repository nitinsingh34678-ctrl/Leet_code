/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int i, sum = 0;
    int* result = (int*)malloc(numsSize * sizeof(int));

    for (i = 0; i < numsSize; i++) {
        sum += nums[i];
        result[i] = sum;
    }

    *returnSize = numsSize;
    return result;
}
