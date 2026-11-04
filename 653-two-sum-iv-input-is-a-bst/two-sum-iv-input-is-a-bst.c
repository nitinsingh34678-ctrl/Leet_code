/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool search(int *arr,int *size,int target ){
    int i;
    for(i=0;i<*size;i++){
        if(arr[i]==target)
            return true;
    }
    return false;
}

bool solve(struct TreeNode *root,int *arr,int k,int *size ){
    if(root==NULL)
        return false;

    int target=k-root->val;

    if(search(arr,size,target))
        return true;
    
    arr[(*size)++]=root->val;

    return solve(root->left,arr,k,size) ||
           solve(root->right,arr,k,size);
}
bool findTarget(struct TreeNode* root, int k) {
    int *arr=malloc(10000*sizeof(int));
    int size=0;

    bool result=solve(root,arr,k,&size);
    free(arr);
    return result;
}