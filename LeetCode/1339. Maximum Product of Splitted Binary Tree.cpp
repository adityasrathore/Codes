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
    const int M = 1e9+7;
    lo    ng long totalSum = 0;
    long long mx = INT_MIN;
    int sum = 0;
public:
    void treeSum(TreeNode* root) {
        if(root == NULL) return;
        treeSum(root->left);
        totalSum += root->val;
        treeSum(root->right);
    }

    int solve(TreeNode* root){
        if(root == NULL) return 0;
        sum = root->val + solve(root->left) + solve(root->right) ;
        mx = max(mx, sum * (totalSum - sum) );
        return sum;
    }

    int maxProduct(TreeNode* root) {
        totalSum = 0;
        mx = INT_MIN;
        treeSum(root);
        solve(root);
        return mx % M;
    }
};
