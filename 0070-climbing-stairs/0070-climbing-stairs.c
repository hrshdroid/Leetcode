int climbStairs(int n) {
    if (n<=2){
        return n;
    }

    int n1=1,n2=2,current;
    for (int i=3;i<=n;i++){
        current=n1+n2;
        n1=n2;
        n2=current;
    }
    return n2;
}