/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = INT_MAX,t=-1;
    int getMinimumDifference(TreeNode* root) {
        if (root->left != NULL) 
            getMinimumDifference(root->left);
        if (t>=0) 
            ans = min(ans,root->val-t);
        t=root->val;
        if (root->right != NULL) 
            getMinimumDifference(root->right);
        return ans;
        
    }
};
