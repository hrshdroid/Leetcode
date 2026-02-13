#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* licenseKeyFormatting(char* s, int k) {
    
    int n = strlen(s);
    int count = 0;
    
    
    for (int i = 0; i < n; i++) {
        if (s[i] != '-') {
            count++;
        }
    }
    
    if (count == 0) {
        char* empty = (char*)malloc(1);
        empty[0] = '\0';
        return empty;
    }
    
    
    int groups = (count - 1) / k;
    int newLen = count + groups;
    
    char* ans = (char*)malloc(newLen + 1);
    ans[newLen] = '\0';
    
    int i = n - 1;
    int j = newLen - 1;
    int curr = 0;
    
    
    while (i >= 0) {
        if (s[i] != '-') {
            ans[j--] = toupper(s[i]);
            curr++;
            
            if (curr == k && j >= 0) {
                ans[j--] = '-';
                curr = 0;
            }
        }
        i--;
    }
    
    return ans;
}
