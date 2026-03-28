int expand(char* s, int l, int r) {
    while (l >= 0 && s[r] && s[l] == s[r]) {
        l--;
        r++;
    }
    return r - l - 1;
}

char* longestPalindrome(char* s) {
    int start = 0, maxLen = 0;

    for (int i = 0; s[i]; i++) {
        int len1 = expand(s, i, i);
        int len2 = expand(s, i, i + 1);
        int len = len1 > len2 ? len1 : len2;

        if (len > maxLen) {
            maxLen = len;
            start = i - (len - 1) / 2;
        }
    }

    char* res = (char*)malloc((maxLen + 1) * sizeof(char));
    for (int i = 0; i < maxLen; i++)
        res[i] = s[start + i];

    res[maxLen] = '\0';
    return res;
}