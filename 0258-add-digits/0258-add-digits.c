int add(int num){
    int count=0;
    while (num>0){
        count+=num%10;
        num/=10;
    }
    return count;
}

int addDigits(int num) {
    int temp=num;
    while (temp>=10){
        temp=add(temp);
    }
    return temp;
}