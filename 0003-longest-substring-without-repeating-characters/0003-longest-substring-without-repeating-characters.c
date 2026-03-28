int lengthOfLongestSubstring(char *s) {
    int map[256] = {0};
    int l = 0, maxLen = 0;

    for (int r = 0; s[r]; r++) {
        map[s[r]]++;

        while (map[s[r]] > 1) {
            map[s[l]]--;
            l++;
        }

        int len = r - l + 1;
        if (len > maxLen)
            maxLen = len;
    }

    return maxLen;
}