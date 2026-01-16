#include <stdbool.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x > y) - (x < y);
}

bool containsDuplicate(int* nums, int numsSize) {
    if (numsSize <= 1) return false;

    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {
            return true;
        }
    }
    return false;
}
