class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL)
            return v;
        vector <int> v1;
        queue <TreeNode *> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode *temp= q.front();
            
            if(temp==NULL){
                v1.push_back(1001);
                q.pop();
                if(!q.empty())
                    q.push(NULL);
            }
            else{
                v1.push_back(temp->val);
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        vector <int> t;
        for(int i=0;i<v1.size();i++)
            if(v1[i]!=1001)
                t.push_back(v1[i]);
            else{
                v.push_back(t);
                t.clear();
            }
        reverse(v.begin() ,v.end());
        return v;
    }
};
