/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int i, j, count;
    int *result = (int *)malloc(numsSize * sizeof(int));

    for (i = 0; i < numsSize; i++) {
        count = 0;
        for (j = 0; j < numsSize; j++) {
            if (j != i && nums[j] < nums[i]) {
                count++;
            }
        }
        result[i] = count;
    }

    *returnSize = numsSize;
    return result;
}
