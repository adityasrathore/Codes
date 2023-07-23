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
    vector<TreeNode*> solve(int n){
       vector<TreeNode*> ans;
        if(n == 1){
            ans.push_back(new TreeNode(0));
            return ans;
        }
        for(int i=1;i<n;i+=2){
            vector<TreeNode*> left = solve(i);
            vector<TreeNode*> right = solve(n-1-i);
            for(auto l:left){
                for(auto r:right){
                    TreeNode *temp = new TreeNode(0);
                    temp->right = r;
                    temp->left = l;
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        return solve(n);
    }
};
