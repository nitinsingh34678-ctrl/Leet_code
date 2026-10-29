/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int height(struct TreeNode *rt,int *diameter){
    if(rt==NULL)
        return 0;
    int leftHeight=height(rt->left,diameter);
    int rightHeight=height(rt->right,diameter);

    if (leftHeight + rightHeight > *diameter)
    *diameter = leftHeight + rightHeight;

    return 1+(leftHeight>rightHeight ? leftHeight:rightHeight);
}
int diameterOfBinaryTree(struct TreeNode* root) {
    int diameter=0;

    height(root,&diameter);

    return diameter;
    
}