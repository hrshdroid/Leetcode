int missingNumber(int* nums, int numsSize) {
    
    for (int i=0;i<=numsSize;i++){
        bool q=false;
        for (int j=0;j<numsSize;j++){
            if (nums[j]==i){
                q=true;
                break;
            }
        }
        if (q==false){
            return i;
        }
    }
    return -1;
}