/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int calculatesum(struct TreeNode *root,int current){
    if(root==NULL)
        return 0;
    current=current*10+root->val;
    if(root->left==NULL && root->right==NULL)
        return current;
    
    return calculatesum(root->left,current)+calculatesum(root->right,current);
}
int sumNumbers(struct TreeNode* root) {
    return calculatesum(root,0);
}