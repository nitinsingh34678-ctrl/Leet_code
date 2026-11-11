/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int solve(struct TreeNode *root,int current_value){
    if(root==NULL)
        return 0;
    
    current_value=(current_value*2)+root->val;

    if(root->left==NULL && root->right==NULL){
        return current_value;
    }

    return solve(root->left,current_value)+
            solve(root->right,current_value);
}
int sumRootToLeaf(struct TreeNode* root) {
    return solve(root,0);
}