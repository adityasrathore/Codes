class Solution {
  public:
    int ans = INT_MAX,t=-1;
    int minDiffInBST(TreeNode* root) {
        if (root->left != NULL) 
            minDiffInBST(root->left);
        if (t>=0) 
            ans = min(ans,root->val-t);
        t=root->val;
        if (root->right != NULL) 
            minDiffInBST(root->right);
        return ans;
    }
};
