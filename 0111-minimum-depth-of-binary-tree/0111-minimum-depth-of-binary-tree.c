int minDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    if (root->left == NULL)
        return 1 + minDepth(root->right);

    if (root->right == NULL)
        return 1 + minDepth(root->left);

    int l = minDepth(root->left);
    int r = minDepth(root->right);

    return (l < r ? l : r) + 1;
}