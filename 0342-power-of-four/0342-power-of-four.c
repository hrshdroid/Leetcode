bool isPowerOfFour(int n) {
    int num=n;
    while (num != 1){
        if (num==0){
            return false;
        }
        else if (num%4==0){
            num/=4;
        }
        else{
            return false;
        }
    }
    return true;
}