#include <string.h>
int strStr(char* haystack, char* needle) {
    char* position =strstr(haystack,needle);
    if (position==NULL){
        return -1;
    }
    
    return position-haystack;
}