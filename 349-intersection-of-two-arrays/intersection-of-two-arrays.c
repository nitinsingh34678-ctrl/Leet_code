int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int i, j, k = 0;
    int *result = (int *)malloc(nums1Size * sizeof(int));

    for(i = 0; i < nums1Size; i++) {
        int found = 0;

        for(j = 0; j < k; j++) {
            if(result[j] == nums1[i]) {
                found = 1;
                break;
            }
        }

        if(found)
            continue;

 
        for(j = 0; j < nums2Size; j++) {
            if(nums1[i] == nums2[j]) {
                result[k] = nums1[i];
                k++;
                break;
            }
        }
    }

    *returnSize = k;
    return result;
}