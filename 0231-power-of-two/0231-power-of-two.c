bool isPowerOfTwo(int n) {
    int num=n;
    while (num != 1){
        if (num==0){
            return false;
        }
        else if (num%2==0){
            num/=2;
        }
        else{
            return false;
        }
    }
    return true;
}