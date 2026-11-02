/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void inorder(struct TreeNode* root, int k, int* count, int* result) {
    if(root == NULL || *count >= k)
        return;

    inorder(root->left, k, count, result);

    (*count)++;

    if(*count == k) {
        *result = root->val;
        return;
    }

    inorder(root->right, k, count, result);
}

int kthSmallest(struct TreeNode* root, int k) {
    int count = 0;
    int result = 0;

    inorder(root, k, &count, &result);

    return result;
}