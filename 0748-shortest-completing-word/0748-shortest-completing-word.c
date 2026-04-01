#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValid(char *word, int *req) {
    int freq[26] = {0};
    for (int i = 0; word[i]; i++) {
        if (isalpha(word[i])) {
            freq[tolower(word[i]) - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] < req[i]) return 0;
    }
    return 1;
}

char* shortestCompletingWord(char *licensePlate, char **words, int wordsSize) {
    int req[26] = {0};

    for (int i = 0; licensePlate[i]; i++) {
        if (isalpha(licensePlate[i])) {
            req[tolower(licensePlate[i]) - 'a']++;
        }
    }

    char *ans = NULL;

    for (int i = 0; i < wordsSize; i++) {
        if (isValid(words[i], req)) {
            if (ans == NULL || strlen(words[i]) < strlen(ans)) {
                ans = words[i];
            }
        }
    }

    return ans;
}