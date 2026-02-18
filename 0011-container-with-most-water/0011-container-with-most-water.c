int maxArea(int* height, int heightSize) {
    int max=0,left=0,right=heightSize-1;

    while (left<right){
        int h= height[left] < height[right] ? height[left] : height[right];
        int w=right-left;
        if (h*w>max){
            max=h*w;
        }
        if (height[left] < height[right])
            left++;
        else
            right--;
    
    }
    return max;
}