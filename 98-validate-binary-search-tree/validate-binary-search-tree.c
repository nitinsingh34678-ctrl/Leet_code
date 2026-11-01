/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool check(struct TreeNode *rt,long min,long max){
    if(rt==NULL)
        return true;
    if(rt->val<=min || rt->val>=max)
        return false;
    return check(rt->left,min,rt->val) &&
           check(rt->right,rt->val,max);
}
bool isValidBST(struct TreeNode* root) {
    return check(root, LONG_MIN, LONG_MAX);

}