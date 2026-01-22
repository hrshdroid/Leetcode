bool isPowerOfThree(int n) {
    int num=n;
    while (num != 1){
        if (num==0){
            return false;
        }
        else if (num%3==0){
            num/=3;
        }
        else{
            return false;
        }
    }
    return true;
}