int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i, consecutive = 0, max_streak = 0;

    for (i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            consecutive++;
        }
        else if (nums[i] == 0) {
            consecutive = 0;
        }

        if (consecutive > max_streak) {
            max_streak = consecutive;
        }
    }

    return max_streak;
}
