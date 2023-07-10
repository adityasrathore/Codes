class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int depth = 1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            while(size > 0){
                TreeNode* node = q.front();
                q.pop();
                if(node->right == NULL && node->left == NULL)
                    return depth;
                if(node->left != NULL)
                    q.push(node->left);
                if(node->right != NULL)
                    q.push(node->right);
                size--;
            }
            depth++;
        }
        return 0;
    }
};
