/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeftLeaves(struct TreeNode* root) {
    if (root == NULL) return 0;

    int sum = 0;
    if (root->left != NULL) {
        if (root->left->left == NULL && root->left->right == NULL)
            sum += root->left->val;   // left child is a leaf
        else
            sum += sumOfLeftLeaves(root->left);
    }
    sum += sumOfLeftLeaves(root->right);

    return sum;
}