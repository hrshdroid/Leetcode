int mySqrt(int x) {
    int mid,left=1,right=x/2;
    
    if (x<2){
        return x;
    }
    else{
        while(left<=right){
            mid=left +(right - left)/2;

            if (mid==x/mid){
                return mid;
            }
            else if (mid <x/mid){
                left = mid+1;
            }
            else {
                right = mid -1;
            }
        }
        return right;
    }
    
}