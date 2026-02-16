#include <stdlib.h>

int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}

int* findErrorNums(int* nums,int numsSize,int* returnSize){
    
    qsort(nums,numsSize,sizeof(int),cmp);
    
    int *arr=(int*)malloc(2*sizeof(int));
    *returnSize=2;
    
    arr[0]=-1;
    arr[1]=1;   // assume 1 missing first
    
    if(nums[0]!=1)
        arr[1]=1;
    
    for(int i=1;i<numsSize;i++){
        if(nums[i]==nums[i-1])
            arr[0]=nums[i];
        if(nums[i]>nums[i-1]+1)
            arr[1]=nums[i-1]+1;
    }
    
    if(nums[numsSize-1]!=numsSize)
        arr[1]=numsSize;
    
    return arr;
}
