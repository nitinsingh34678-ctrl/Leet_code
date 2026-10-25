/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int height(struct TreeNode* root) {
    if (root == NULL)
        return 0;

    int leftheight=height(root->left);
    int rightheight=height(root->right);

    return 1+(leftheight>rightheight ? leftheight:rightheight);
}
bool isBalanced(struct TreeNode* root) {
    if (root == NULL)
        return true;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int difference=abs(leftHeight - rightHeight);

    if(difference>1)
        return false;
    return isBalanced(root->left) && isBalanced(root->right);
}