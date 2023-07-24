class Solution {
public:
    int height(TreeNode *root){
        if(root==NULL)
            return 0;
        int h1=height(root->left);
        int h2=height(root->right);
        return 1+max(h1,h2);
    } 
    class HDPair{
    public:
    int height;
    int diameter;
    };
    HDPair optDiameter(TreeNode* root){
        HDPair p;
        if(root==NULL){
            p.height=p.diameter=0;
            return p;
        }
        HDPair Left=optDiameter(root->left);
        HDPair Right=optDiameter(root->right);
        p.height=max(Left.height,Right.height)+1;

        int D1= Left.height+Right.height;
        int D2=Left.diameter;
        int D3=Right.diameter;
        p.diameter=max(D1,max(D2,D3));
        return p;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return optDiameter(root).diameter;
    }
};


-------------------------------------------------------------


class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL)
            return 0;
        int left = height(root->left);
        int right = height(root->right);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        int left = height(root->left);
        int right = height(root->right);
        int m = 0;
        m = max(m,left+right);
        int m1 = diameterOfBinaryTree(root->left);
        int m2 = diameterOfBinaryTree(root->right);
        return m;
    }
};
