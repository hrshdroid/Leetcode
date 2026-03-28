char* convertToTitle(int columnNumber) {
    char* res = (char*)malloc(10 * sizeof(char));
    int i = 0;

    while (columnNumber > 0) {
        columnNumber--;
        res[i++] = (columnNumber % 26) + 'A';
        columnNumber /= 26;
    }

    res[i] = '\0';

    for (int j = 0; j < i / 2; j++) {
        char t = res[j];
        res[j] = res[i - j - 1];
        res[i - j - 1] = t;
    }

    return res;
}