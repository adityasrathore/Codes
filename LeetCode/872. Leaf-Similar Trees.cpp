class Solution {
public:
    vector <int> r1,r2;
     void node1(TreeNode* root1){
        if(root1==NULL)
            return;
        node1(root1->left);
        if(root1->left==NULL && root1->right==NULL)
            r1.push_back(root1->val);
        node1(root1->right);
    }
    void node2(TreeNode* root2){
        if(root2==NULL)
            return;
        node2(root2->left);
        if(root2->left==NULL && root2->right==NULL)
            r2.push_back(root2->val);
        node2(root2->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        node1(root1);
        node2(root2);
         
        if(r1==r2)
            return true;
        return false;
    }
};
