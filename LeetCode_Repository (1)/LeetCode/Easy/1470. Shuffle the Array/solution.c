/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    int i;
    int *result = (int *)malloc(numsSize * sizeof(int));

    for (i = 0; i < n; i++) {
        result[2 * i] = nums[i];
        result[2 * i + 1] = nums[i + n];
    }

    *returnSize = numsSize;
    return result;
}
