int calPoints(char **operations, int operationsSize) {
    int stack[1000];
    int top = -1;

    for (int i = 0; i < operationsSize; i++) {

        if (strcmp(operations[i], "+") == 0) {
            int sum = stack[top] + stack[top - 1];
            stack[++top] = sum;

        } else if (strcmp(operations[i], "D") == 0) {
            stack[++top] = 2 * stack[top];

        } else if (strcmp(operations[i], "C") == 0) {
            top--; 

        } else {
            stack[++top] = atoi(operations[i]);
        }
    }

    int total = 0;
    for (int i = 0; i <= top; i++) {
        total += stack[i];
    }

    return total;
}