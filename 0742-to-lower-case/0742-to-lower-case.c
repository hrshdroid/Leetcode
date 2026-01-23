#include <string.h>
char* toLowerCase(char* s) {
    for (int i=0;s[i];i++){
        if (s[i]>='A' & s[i]<='Z'){
            s[i]+=32;
        }
        
    }
    return s;
}