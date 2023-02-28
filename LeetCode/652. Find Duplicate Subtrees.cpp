class Solution {
public:
    string solve(TreeNode* root, unordered_map <string,int> &mp,vector <TreeNode*> &v){
        if(root==NULL)
            return "";
        string s=to_string(root->val)+","+solve(root->left,mp,v)+","+solve(root->right,mp,v);
        if(mp[s]++==1)
            v.push_back(root);
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map <string,int> mp;
        vector <TreeNode*> v;
        solve(root,mp,v);
        return v;
    }
};
