class Solution {
    int sum;
public:
    int maxPathSum(TreeNode* root) {
        sum=INT_MIN;
        help(root);
        return sum;
    }
    
    int help(TreeNode* root){
        if(!root)   return 0;
        int left = max(0, help(root->left));
        int right = max(0, help(root->right));

        sum = max(sum, left+right+root->val);
      
        return max(left, right)+root->val;
    }
};

----------------------------------------------
    
class Solution {
public:
    int solve(TreeNode* root,int &m){
        if(root == NULL)
            return 0;
        int lSum = max(0,solve(root->left,m));
        int rSum = max(0,solve(root->right,m));
        
        m = max(m, root->val+lSum+rSum);
        return root->val+max(lSum,rSum);        
    }
    int maxPathSum(TreeNode* root) {
        int m = INT_MIN;
        int x = solve(root,m);
        return m;
    }
};
