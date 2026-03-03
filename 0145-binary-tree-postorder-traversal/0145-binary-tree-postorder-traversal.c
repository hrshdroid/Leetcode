void postorder(struct TreeNode* root, int* arr, int* index) {
    if (root == NULL)
        return;

    postorder(root->left, arr, index);               
    postorder(root->right, arr, index);  
    arr[(*index)++] = root->val;           
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(100 * sizeof(int));  
    *returnSize = 0;

    postorder(root, result, returnSize);

    return result;
}