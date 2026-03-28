int longestPalindrome(char* s) {
    int freq[128] = {0};

    for (int i = 0; s[i]; i++)
        freq[s[i]]++;

    int len = 0, odd = 0;

    for (int i = 0; i < 128; i++) {
        len += (freq[i] / 2) * 2;
        if (freq[i] % 2)
            odd = 1;
    }

    return len + odd;
}