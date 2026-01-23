void reverseString(char* s, int sSize) {
    char rev[sSize];

    for (int i=0;i<sSize;i++){
        rev[i]=s[sSize-i-1];
    }

    for (int i=0;i<sSize;i++){
        s[i]=rev[i];
    }
}