class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        bool temp = true;
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node == NULL)
                temp = false;
            else{
                if(temp == false)
                    return false;
                q.push(node->left);
                q.push(node->right);
            }   
        }
        return true;
    }
};
