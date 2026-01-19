#include <string.h>

int lengthOfLastWord(char* s) {
    int len=0,last=0;
    for (int i=0;s[i] !='\0';i++){
        
        if (s[i]!=' '){
            len++;
            last=len;
        }
        else {
            len=0;
        }
    }
    return last;
}