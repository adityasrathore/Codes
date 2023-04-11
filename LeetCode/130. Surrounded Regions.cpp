class Solution {
public:
	// DFS Call
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>> &board){
        int m=board.size();
        int n=board[0].size();
        vis[i][j]=1;  // Mark Visited
        int a[4]={1,-1,0,0};
        int b[4]={0,0,1,-1};
        for(int k=0;k<4;k++){
            int xx=i+a[k];
            int yy=j+b[k];
			// Checking 4 Way Movement Left Right Up Down
            if(xx>=0 && xx<m && yy>=0 && yy<n && board[xx][yy]=='O' && !vis[xx][yy]){
                dfs(xx,yy,vis,board);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || i==m-1 || j==0 || j==n-1){  // Movement through the Edge
                    if(!vis[i][j] && board[i][j]=='O'){ 
                        dfs(i,j,vis,board);
                    }
                }
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && board[i][j]=='O') // Unvisited and cannot be reached are changed to 'X'
                    board[i][j]='X';
            }
        }
    }
};
