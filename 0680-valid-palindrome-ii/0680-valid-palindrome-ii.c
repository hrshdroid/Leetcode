int isPal(char* s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}

bool validPalindrome(char* s) {
    int l = 0, r = 0;
    while (s[r]) r++;
    r--;

    while (l < r) {
        if (s[l] != s[r])
            return isPal(s, l + 1, r) || isPal(s, l, r - 1);
        l++;
        r--;
    }

    return true;
}