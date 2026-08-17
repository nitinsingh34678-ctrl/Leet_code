int findNumbers(int* nums, int numsSize) {
    int i, even_count = 0, digit_count, temp;

    for (i = 0; i < numsSize; i++) {
        digit_count = 0;
        temp = nums[i];

        while (temp != 0) {
            temp /= 10;
            digit_count++;
        }

        if (digit_count % 2 == 0) {
            even_count++;
        }
    }

    return even_count;
}
