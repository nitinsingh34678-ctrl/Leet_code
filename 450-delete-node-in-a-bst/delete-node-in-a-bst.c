/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if(root==NULL)
        return NULL;
    if(key<root->val)
        root->left= deleteNode(root->left,key);
    else if(key>root->val)
        root->right= deleteNode(root->right,key);
    else{
        if(root->left==NULL)
            return root->right;
        else if(root->right==NULL)
            return root->left;
        else{
            struct TreeNode *successor=root->right;
            while(successor->left!=NULL){
                successor=successor->left;
            }
            root->val=successor->val;
            root->right=deleteNode(root->right,successor->val);
        }

    }
    return root;
}