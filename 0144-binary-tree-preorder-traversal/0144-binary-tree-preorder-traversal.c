int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* res = (int*)malloc(10000 * sizeof(int));
    *returnSize = 0;

    struct TreeNode* stack[10000];
    int top = -1;

    if (root)
        stack[++top] = root;

    while (top != -1) {
        struct TreeNode* node = stack[top--];
        res[(*returnSize)++] = node->val;

        if (node->right)
            stack[++top] = node->right;
        if (node->left)
            stack[++top] = node->left;
    }

    return res;
}