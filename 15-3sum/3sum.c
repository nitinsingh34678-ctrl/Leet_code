/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    if(x < y) return -1;
    if(x > y) return 1;
    return 0;
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int i;
    int left, right;
    int sum;
    int count = 0;

    int maxResults = numsSize * numsSize;

    int **result = malloc(maxResults * sizeof(int *));
    *returnColumnSizes = malloc(maxResults * sizeof(int));

    qsort(nums, numsSize, sizeof(int), compare);

    for(i = 0; i < numsSize - 2; i++) {

        if(i > 0 && nums[i] == nums[i - 1])
            continue;

        left = i + 1;
        right = numsSize - 1;

        while(left < right) {

            sum = nums[i] + nums[left] + nums[right];

            if(sum < 0) {
                left++;
            }
            else if(sum > 0) {
                right--;
            }
            else {
                result[count] = malloc(3 * sizeof(int));

                result[count][0] = nums[i];
                result[count][1] = nums[left];
                result[count][2] = nums[right];

                (*returnColumnSizes)[count] = 3;

                count++;

                left++;
                right--;
                while(left < right && nums[left] == nums[left - 1])
                    left++;
                while(left < right && nums[right] == nums[right + 1])
                    right--;
            }
        }
    }

    *returnSize = count;

    return result;
}