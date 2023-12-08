class Solution {
public:
    string tree2str(TreeNode* root) {
		string ans = to_string(root->val);
		if (root->left) 
			ans += "(" + tree2str(root->left) + ")";
		if (root->right) { 
			if (root->left==NULL) 
                ans += "()"; 
			ans += "(" + tree2str(root->right) + ")"; 
		}
		return ans;
	}
};


606. Construct String from Binary Tree
