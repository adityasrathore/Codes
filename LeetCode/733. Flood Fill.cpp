class Solution {
public:
    bool isValid(int i,int j,int initialColor,int color,
                 vector<vector<int>> &v,vector<vector<int>> &image){
        int m=image.size();
        int n=image[0].size();
        if(i>=0 && i<m && j>=0 && j<n && image[i][j]==initialColor && v[i][j]!=color)
            return true;
        return false;
    }
    void dfs(int i, int j,int initialColor,int color,vector<vector<int>> &v, 
             vector<vector<int>> &image){
        v[i][j]=color;
        int a[4]={1,-1,0,0};
        int b[4]={0,0,1,-1};
        for(int k=0;k<4;k++){
            int xx=i+a[k];
            int yy=j+b[k];
            if(isValid(xx,yy,initialColor,color,v,image)==true)
                dfs(xx,yy,initialColor,color,v,image);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>> v = image;

        int initialColor=image[sr][sc];
        dfs(sr,sc,initialColor,color,v,image);
        return v;
        
    }
};
