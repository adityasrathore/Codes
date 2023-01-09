class Solution {
public:
    vector <int> v;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
            return v;
        v.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return v;
    }
};
