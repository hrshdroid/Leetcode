int arrangeCoins(int n) {
    int completed=0;
    int num=n;
    while (num>=completed){
        num-=completed;
        completed++;
    }
    return completed-1;
}