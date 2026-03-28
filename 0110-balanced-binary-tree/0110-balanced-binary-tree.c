int height(struct TreeNode* root) {
    if (root == NULL)
        return 0;

    int l = height(root->left);
    if (l == -1) return -1;

    int r = height(root->right);
    if (r == -1) return -1;

    if (l - r > 1 || r - l > 1)
        return -1;

    return (l > r ? l : r) + 1;
}

bool isBalanced(struct TreeNode* root) {
    return height(root) != -1;
}