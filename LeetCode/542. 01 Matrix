class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        
        vector<vector<int>> dist(m,vector<int>(n,0));
        vector<vector<int>> vis(m,vector<int>(n,0));
        queue <pair <pair<int,int>,int>> q;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
            }
        }
        
        while(!q.empty()){
            int x=q.front().first.first;
            int y=q.front().first.second;
            int temp=q.front().second;
            q.pop();
            dist[x][y]=temp;
            int a[4]={1,-1,0,0};
            int b[4]={0,0,1,-1};
            for(int k=0;k<4;k++){
                int xx=x+a[k];
                int yy=y+b[k];
                if(xx>=0 && xx<m && yy>=0 && yy<n && vis[xx][yy]==0){
                    vis[xx][yy]=1;
                    q.push({{xx,yy},temp+1});
                }
            }
        }
        return dist;
        
    }
};
