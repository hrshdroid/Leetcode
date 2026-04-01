#include <stdio.h>

int dominantIndex(int* nums, int numsSize) {
    if (numsSize == 1) return 0;

    int max = -1, second = -1, index = -1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max) {
            second = max;
            max = nums[i];
            index = i;
        } else if (nums[i] > second) {
            second = nums[i];
        }
    }

    return (max >= 2 * second) ? index : -1;
}