int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    *returnSize = numRows;
    int** res = (int**)malloc(numRows * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));

    for (int i = 0; i < numRows; i++) {
        res[i] = (int*)malloc((i + 1) * sizeof(int));
        (*returnColumnSizes)[i] = i + 1;

        res[i][0] = res[i][i] = 1;

        for (int j = 1; j < i; j++) {
            res[i][j] = res[i-1][j-1] + res[i-1][j];
        }
    }

    return res;
}