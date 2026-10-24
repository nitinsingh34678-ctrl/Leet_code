/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* a, struct TreeNode* b){
    if(a==NULL && b==NULL)
        return true;
    else if(a==NULL || b==NULL)
        return false;
    else if(a->val!=b->val)
        return false;
    else
        return isSameTree(a->left,b->left) 
        && isSameTree(a->right,b->right);
}
bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
    if(subRoot==NULL)
        return true;
    if(root==NULL)
        return false;
    
    return isSameTree(root,subRoot) || 
        isSubtree(root->left,subRoot) ||
        isSubtree(root->right,subRoot);
}