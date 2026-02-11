bool isHappy(int n) {
   while (n != 1 && n != 4){
    if (n==1){
        return true;
    }
    int nnum=0;
    while (n>0){
        int temp=n%10;
        nnum+=temp*temp;
        n/=10;
    }
    n=nnum;
   } 
   return n==1;
}