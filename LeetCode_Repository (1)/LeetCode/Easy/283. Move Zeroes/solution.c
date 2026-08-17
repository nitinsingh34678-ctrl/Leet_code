void moveZeroes(int* nums, int numsSize) {
    int position = 0, i;

    for (i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    for (i = position; i < numsSize; i++) {
        nums[i] = 0;
    }
}
