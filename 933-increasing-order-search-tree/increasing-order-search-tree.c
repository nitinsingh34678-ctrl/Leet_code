struct TreeNode* increasingBST(struct TreeNode* root) {
    if(root == NULL)
        return NULL;

    struct TreeNode* dummy = malloc(sizeof(struct TreeNode));
    dummy->right = NULL;

    struct TreeNode* curr = dummy;

    struct TreeNode* stack[100];
    int top = -1;

    struct TreeNode* node = root;

    while(node != NULL || top != -1) {
        while(node != NULL) {
            stack[++top] = node;
            node = node->left;
        }

        node = stack[top--];

        node->left = NULL;
        curr->right = node;
        curr = node;

        node = node->right;
    }

    struct TreeNode* result = dummy->right;
    free(dummy);

    return result;
}